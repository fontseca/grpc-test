#ifndef CLIENT_SERVICE_H
#define CLIENT_SERVICE_H

#include <cstdio>
#include <cstddef>
#include <deque>

#include <grpc++/grpc++.h>

#include "grpc_test/models/Client.h"
#include "protobuf/services/ClientService.grpc.pb.h"
#include "grpc_test/Logger.h"
#include "grpc_test/Repository.h"

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
      gRPCTest::Logger::Log(stdout, "making a new client...");
      Repository<gRPCTest::Core::Models::Client> repository { m_database };
      std::size_t previouse_data_store_size = repository.Count();
      gRPCTest::Core::Models::Client new_client
      {
        .id = static_cast<std::uint64_t>(request->id()),
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
      response->mutable_error_status()->set_successful(repository.Count() > previouse_data_store_size);

      repository.Insert(new_client);

      return ::grpc::Status(grpc::StatusCode::OK, "Client created");
    }

    virtual ::grpc::Status ListClient([[maybe_unused]] ::grpc::ServerContext* context,
      const ::gRPCTest::Protos::Services::ClientByIdRequest* request,
        ::gRPCTest::Protos::Services::ListClientResponse* response)
    {
      const std::uint64_t id = request->client_id();
      ::gRPCTest::Logger::Log(stdout, "fetching client with id `%lu'...", id);

      Repository<::gRPCTest::Core::Models::Client> repository { m_database };

      auto result = repository.SelectWhere([&id](const ::gRPCTest::Core::Models::Client &client)
      {
        return client.id == id;
      });

      if (result.has_value())
      {
        const auto client = result.value();
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

    virtual ::grpc::Status FetchInvoices([[maybe_unused]] ::grpc::ServerContext* context,
      const ::google::protobuf::Empty* request,
        ::gRPCTest::Protos::Services::FetchClientInvoicesResponse* response)
    {
      (void) context;
      (void) request;
      (void) response;
      return { };
    }
  
    virtual ::grpc::Status FetchAllClients([[maybe_unused]] ::grpc::ServerContext* context,
      [[maybe_unused]] const ::google::protobuf::Empty* request,
        ::gRPCTest::Protos::Services::FetchAllClientsResponse* response)
    {
      gRPCTest::Logger::Log(stdout, "fetching clients...");
      Repository<gRPCTest::Core::Models::Client> repository { m_database };

      auto clients = repository.Select();

      for (const auto &client : clients)
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
      (void) request;
      (void) response;
      return ::grpc::Status::OK;
    }

  private:
    ::gRPCTest::Core::Database &m_database;
  };
}

#endif /* CLIENT_SERVICE_H */
