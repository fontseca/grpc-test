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
#include "protobuf/services/InvoiceService.grpc.pb.h"

namespace gRPCTest::Core::Services
{
  class InvoiceService final : public ::gRPCTest::Protos::Services::InvoiceService::Service
  {
    virtual ::grpc::Status RegisterInvoice([[maybe_unused]] ::grpc::ServerContext* context,
      const ::gRPCTest::Protos::Models::Invoice* request,
        ::gRPCTest::Protos::Services::RegisterInvoiceResponse* response)
    {
      gRPCTest::Logger::Log(stdout, "making a new invoice...");

      std::size_t previouse_data_store_size = m_invoices_data_store.size();
      gRPCTest::Core::Models::Client new_client
      {
        .id = static_cast<std::uint64_t>(request->client().id()),
        .name = request->client().name(),
        .phone = request->client().phone(),
        .email = request->client().email()
      };

      gRPCTest::Core::Models::Invoice invoice
      {
        .id = static_cast<std::uint64_t>(request->id()),
        .name = request->name(),
        .address = request->address(),
        .client = std::move( new_client ),
        .created_at = std::chrono::high_resolution_clock::now()
      };

      m_invoices_data_store.push_back( std::move(invoice) );
      response->mutable_error_status()->set_successful(previouse_data_store_size > m_invoices_data_store.size());
      return ::grpc::Status::OK;
    }

    virtual ::grpc::Status FetchInvoiceById([[maybe_unused]] ::grpc::ServerContext* context,
      const ::gRPCTest::Protos::Services::InvoiceByIdRequest* request,
        ::gRPCTest::Protos::Services::FetchInvoiceByIdResponse* response)
    {
      const std::uint64_t id = request->invoice_id();
      gRPCTest::Logger::Log(stdout, "fetching invoice with id `%lu'...", id);

      for (const auto &invoice : m_invoices_data_store)
      {
        if (invoice.id == id)
        {
          auto new_invoice = new gRPCTest::Protos::Models::Invoice;
          new_invoice->set_id(invoice.id);
          new_invoice->set_name(invoice.name);
          new_invoice->set_address(invoice.address);

          auto new_client = new gRPCTest::Protos::Models::Client;
          new_client->set_id(invoice.client.id);
          new_client->set_name(invoice.client.name);
          new_client->set_phone(invoice.client.phone);
          new_client->set_email(invoice.client.email);
          new_invoice->set_allocated_client(new_client);

          auto at = new google::protobuf::Timestamp;
          const auto epoch = invoice.created_at.time_since_epoch();
          at->set_seconds(std::chrono::duration_cast<std::chrono::seconds>(epoch).count());
          new_invoice->set_allocated_created_at(at);

          response->set_allocated_invoice(new_invoice);
          return ::grpc::Status::OK;
        }
      }

      return ::grpc::Status(::grpc::StatusCode::NOT_FOUND, "Invoice was not found.");
    }

    virtual ::grpc::Status FetchInvoiceByDate([[maybe_unused]] ::grpc::ServerContext* context,
      [[maybe_unused]] const ::gRPCTest::Protos::Services::FetchInvoiceByDateRequest* request,
        [[maybe_unused]] ::gRPCTest::Protos::Services::FetchInvoiceByDateResponse* response)
    {
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
      gRPCTest::Logger::Log(stdout, "fetching invoices...");

      for (const auto &invoice : m_invoices_data_store)
      {
        auto grpc_invoice = response->add_invoices();

        grpc_invoice->set_id(invoice.id);
        grpc_invoice->set_name(invoice.name);
        grpc_invoice->set_address(invoice.address);

        auto new_client = new gRPCTest::Protos::Models::Client;
        new_client->set_id(invoice.client.id);
        new_client->set_name(invoice.client.name);
        new_client->set_phone(invoice.client.phone);
        new_client->set_email(invoice.client.email);

        grpc_invoice->set_allocated_client(new_client);

        auto at = new google::protobuf::Timestamp;
        const auto epoch = invoice.created_at.time_since_epoch();
        at->set_seconds(std::chrono::duration_cast<std::chrono::seconds>(epoch).count());
        grpc_invoice->set_allocated_created_at(at);
      }

      return ::grpc::Status::OK;
    }

  private:
    std::deque<::gRPCTest::Core::Models::Invoice> m_invoices_data_store;
  };
}

#endif /* INVOICE_SERVICE_H */
