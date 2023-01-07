#include <memory>

#include <grpcpp/grpcpp.h>
#include <grpcpp/health_check_service_interface.h>
#include <grpcpp/ext/proto_server_reflection_plugin.h>

#include "grpc_test/services/ClientService.h"
#include "grpc_test/services/InvoiceService.h"
#include "grpc_test/services/ProductService.h"
#include "grpc_test/Logger.h"
#include "grpc_test/Database.h"

auto main([[maybe_unused]] std::int32_t argc, [[maybe_unused]] char *argv[])
  -> std::int32_t
{
  const char *const uri = "0.0.0.0:2003";
  gRPCTest::Core::Database db;

  db.RegisterTable<::gRPCTest::Core::Models::Client>("Client");
  db.RegisterTable<::gRPCTest::Core::Models::Invoice>("Invoice");
  db.RegisterTable<::gRPCTest::Core::Models::Product>("Product");

  gRPCTest::Core::Services::ClientService client_service { db };
  gRPCTest::Core::Services::InvoiceService invoice_service;
  gRPCTest::Core::Services::ProductService product_service { db };

  grpc::EnableDefaultHealthCheckService(true);

  grpc::ServerBuilder builder;

  builder.AddListeningPort(uri, grpc::InsecureServerCredentials());
  builder.RegisterService(&client_service);
  builder.RegisterService(&invoice_service);
  builder.RegisterService(&product_service);

  std::unique_ptr<grpc::Server> server { builder.BuildAndStart() };

  gRPCTest::Logger::Log(stdout, "server is running at `%s'...", uri);
  server->Wait();

  return EXIT_SUCCESS;
}