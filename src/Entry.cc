#include <memory>

#include <grpcpp/grpcpp.h>
#include <grpcpp/health_check_service_interface.h>
#include <grpcpp/ext/proto_server_reflection_plugin.h>

#include "grpc_test/services/ClientService.h"
#include "grpc_test/services/InvoiceService.h"
#include "grpc_test/services/ProductService.h"
#include "grpc_test/Logger.h"

auto main([[maybe_unused]] std::int32_t argc, [[maybe_unused]] char *argv[])
  -> std::int32_t
{
  const char *const uri = "0.0.0.0:2003";
  gRPCTest::Core::Services::ClientService client_service;
  gRPCTest::Core::Services::InvoiceService invoice_service;
  gRPCTest::Core::Services::ProductService product_service;

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