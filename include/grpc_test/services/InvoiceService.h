#ifndef INVOICE_SERVICE_H
#define INVOICE_SERVICE_H

#include <cstdio>
#include <cstddef>
#include <deque>
#include <chrono>

#include <grpc++/grpc++.h>

#include "grpc_test/models/Invoice.h"
#include "grpc_test/models/Client.h"
#include "grpc_test/Logger.h"
#include "grpc_test/Database.h"
#include "protobuf/services/InvoiceService.grpc.pb.h"

namespace gRPCTest::Core::Services
{
  class InvoiceService final : public ::gRPCTest::Protos::Services::InvoiceService::Service
  {
  public:
    explicit inline InvoiceService(::gRPCTest::Core::Database &database) noexcept
      : m_database { database }
    { }

  private:
    virtual ::grpc::Status RegisterInvoice([[maybe_unused]] ::grpc::ServerContext* context,
      const ::gRPCTest::Protos::Models::Invoice* request,
        ::gRPCTest::Protos::Services::RegisterInvoiceResponse* response)
    {
      ::gRPCTest::Logger::Log(stdout, "making a new invoice...");

      auto repository = m_database.Repository<::gRPCTest::Core::Models::Invoice>();

      std::size_t previouse_data_store_size = repository->Size();

      ::gRPCTest::Core::Models::Invoice invoice
      {
        .id = request->id(),
        .client_id = request->client_id(),
        .name = request->name(),
        .address = request->address(),
        .created_at = std::chrono::high_resolution_clock::now(),
      };

      repository->InsertOne(invoice);
      response->mutable_error_status()->set_successful(previouse_data_store_size > repository->Size());
      return ::grpc::Status::OK;
    }

    virtual ::grpc::Status FetchInvoiceById([[maybe_unused]] ::grpc::ServerContext* context,
      const ::gRPCTest::Protos::Services::InvoiceByIdRequest* request,
        ::gRPCTest::Protos::Services::FetchInvoiceByIdResponse* response)
    {
      const std::uint64_t id = request->invoice_id();

      ::gRPCTest::Logger::Log(stdout, "fetching invoice with id `%lu'...", id);

      auto repository = m_database.Repository<::gRPCTest::Core::Models::Invoice>();

      const auto query = repository->Find(
        [&id](const ::gRPCTest::Core::Models::Invoice &invoice)
      {
        return invoice.id == id;
      });

      if (query)
      {
        const auto invoice = query.value();
        auto new_invoice = new gRPCTest::Protos::Models::Invoice;
        new_invoice->set_id(invoice.id);
        new_invoice->set_name(invoice.name);
        new_invoice->set_address(invoice.address);
        new_invoice->set_client_id(invoice.client_id);
        auto at = new google::protobuf::Timestamp;
        const auto epoch = invoice.created_at.time_since_epoch();
        at->set_seconds(std::chrono::duration_cast<std::chrono::seconds>(epoch).count());
        new_invoice->set_allocated_created_at(at);

        response->set_allocated_invoice(new_invoice);
        return ::grpc::Status::OK;
      }

      return ::grpc::Status(::grpc::StatusCode::NOT_FOUND, "Invoice was not found.");
    }

    virtual ::grpc::Status FetchInvoiceByDate([[maybe_unused]] ::grpc::ServerContext* context,
      [[maybe_unused]] const ::gRPCTest::Protos::Services::FetchInvoiceByDateRequest* request,
        [[maybe_unused]] ::gRPCTest::Protos::Services::FetchInvoiceByDateResponse* response)
    {
      ::gRPCTest::Logger::Log(stdout, "fetching invoice by date...");

      auto repository = m_database.Repository<::gRPCTest::Core::Models::Invoice>();

      const google::protobuf::Timestamp requested_date = request->date();

      const auto matches = repository->SelectWhere(
        [&requested_date](const ::gRPCTest::Core::Models::Invoice &invoice)
      {
        const auto epoch = invoice.created_at.time_since_epoch();
        const auto seconds = std::chrono::duration_cast<std::chrono::seconds>(epoch);
        return seconds.count() == requested_date.seconds();
      });

      for (const auto &invoice : matches)
      {
        auto grpc_invoice = response->add_invoices();

        grpc_invoice->set_id(invoice.id);
        grpc_invoice->set_name(invoice.name);
        grpc_invoice->set_address(invoice.address);
        grpc_invoice->set_client_id(invoice.client_id);
        auto at = new google::protobuf::Timestamp;
        const auto epoch = invoice.created_at.time_since_epoch();
        at->set_seconds(std::chrono::duration_cast<std::chrono::seconds>(epoch).count());
        grpc_invoice->set_allocated_created_at(at);
      }

      return ::grpc::Status::OK;
    }

    virtual ::grpc::Status FetchInvoiceDetails([[maybe_unused]] ::grpc::ServerContext* context,
      [[maybe_unused]] const ::gRPCTest::Protos::Services::InvoiceByIdRequest* request,
        [[maybe_unused]] ::gRPCTest::Protos::Services::FetchInvoiceDetailsResponse* response)
    {
      return ::grpc::Status::OK;
    }

    virtual ::grpc::Status FetchInvoices([[maybe_unused]] ::grpc::ServerContext* context,
      [[maybe_unused]] const ::google::protobuf::Empty* request,
        ::gRPCTest::Protos::Services::FetchInvoicesResponse* response)
    {
      using namespace ::gRPCTest::Core;
      ::gRPCTest::Logger::Log(stdout, "fetching invoices...");

      for (const auto &invoice
        : m_database.Repository<Models::Invoice>()->SelectAll())
      {
        auto grpc_invoice = response->add_invoices();

        grpc_invoice->set_id(invoice.id);
        grpc_invoice->set_name(invoice.name);
        grpc_invoice->set_address(invoice.address);
        grpc_invoice->set_client_id(invoice.client_id);
        auto at = new google::protobuf::Timestamp;
        const auto epoch = invoice.created_at.time_since_epoch();
        at->set_seconds(std::chrono::duration_cast<std::chrono::seconds>(epoch).count());
        grpc_invoice->set_allocated_created_at(at);
      }

      return ::grpc::Status::OK;
    }

  private:
    ::gRPCTest::Core::Database &m_database;
  };
}

#endif /* INVOICE_SERVICE_H */
