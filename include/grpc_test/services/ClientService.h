#ifndef CLIENT_SERVICE_H
#define CLIENT_SERVICE_H

#include <cstdio>
#include <cstddef>
#include <deque>

#include <grpc++/grpc++.h>

#include "grpc_test/models/Client.h"
#include "grpc_test/models/Invoice.h"
#include "protobuf/services/ClientService.grpc.pb.h"
#include "grpc_test/Logger.h"
#include "grpc_test/Database.h"

namespace gRPCTest::Core::Services
{
  class ClientService final : public ::gRPCTest::Protos::Services::ClientService::Service
  {
  public:
    explicit inline ClientService(::gRPCTest::Core::Database &database) noexcept
      : m_database { database }
    { }

  private:
    virtual ::grpc::Status CreateClient([[maybe_unused]] ::grpc::ServerContext* context,
      const ::gRPCTest::Protos::Models::Client* request,
        ::gRPCTest::Protos::Services::CreateClientResponse* response)
    {
      ::gRPCTest::Logger::Log(stdout, "making a new client...");

      auto repository = m_database.Repository<::gRPCTest::Core::Models::Client>();
      std::size_t previouse_data_store_size = repository->Size();

      gRPCTest::Core::Models::Client new_client
      {
        .id = request->id(),
        .name = request->name(),
        .phone = request->phone(),
        .email = request->email()
      };

     auto client_reponse = new gRPCTest::Protos::Models::Client;

      client_reponse->set_id(new_client.id);
      client_reponse->set_name(new_client.name);
      client_reponse->set_email(new_client.email);
      client_reponse->set_phone(new_client.phone);

      response->set_allocated_client(client_reponse);
      response->mutable_error_status()->set_successful(repository->Size() > previouse_data_store_size);

      repository->InsertOne(new_client);

      return ::grpc::Status(grpc::StatusCode::OK, "Client created");
    }

    virtual ::grpc::Status FetchClientById([[maybe_unused]] ::grpc::ServerContext* context,
      const ::gRPCTest::Protos::Services::ClientByIdRequest* request,
        ::gRPCTest::Protos::Services::FetchClientByIdResponse* response)
    {
      const std::uint64_t id = request->client_id();
      ::gRPCTest::Logger::Log(stdout, "fetching client with id `%lu'...", id);

      auto repository = m_database.Repository<::gRPCTest::Core::Models::Client>();

      const auto query = repository->Find(
        [&id](const ::gRPCTest::Core::Models::Client &client)
      {
        return client.id == id;
      });

      if (query)
      {
        const auto client = query.value();
        auto new_client = new gRPCTest::Protos::Models::Client;
        new_client->set_id(client.id);
        new_client->set_name(client.name);
        new_client->set_phone(client.phone);
        new_client->set_email(client.email);
        response->set_allocated_client(new_client);
        return ::grpc::Status::OK;
      }

      return ::grpc::Status(::grpc::StatusCode::NOT_FOUND, "Client was not found.");
    }

    virtual ::grpc::Status FetchAllClients([[maybe_unused]] ::grpc::ServerContext* context,
      [[maybe_unused]] const ::google::protobuf::Empty* request,
        ::gRPCTest::Protos::Services::FetchAllClientsResponse* response)
    {
      using namespace ::gRPCTest::Core;

      ::gRPCTest::Logger::Log(stdout, "fetching clients...");

      for (const auto &client
        : m_database.Repository<Models::Client>()->SelectAll())
      {
        auto grpc_client = response->add_clients();
        grpc_client->set_id(client.id);
        grpc_client->set_name(client.name);
        grpc_client->set_phone(client.phone);
        grpc_client->set_email(client.email);
      }

      return ::grpc::Status::OK;
    }

    virtual ::grpc::Status FetchClientInvoices([[maybe_unused]] ::grpc::ServerContext* context,
      const ::gRPCTest::Protos::Services::ClientByIdRequest* request,
        ::gRPCTest::Protos::Services::FetchClientInvoicesResponse* response)
    {
      const std::uint64_t id = request->client_id();
      ::gRPCTest::Logger::Log(stdout, "fetching invoices of client with id `%lu'...", id);

      auto invoice_repository = m_database.Repository<::gRPCTest::Core::Models::Invoice>();

      const auto invoices = invoice_repository->SelectWhere(
        [&id](const ::gRPCTest::Core::Models::Invoice &invoice)
      {
        return invoice.client_id == id;
      });

      for (const auto &invoice : invoices)
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

#endif /* CLIENT_SERVICE_H */
