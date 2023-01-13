#include <memory>
#include <chrono>

#include <grpcpp/grpcpp.h>
#include <grpcpp/health_check_service_interface.h>
#include <grpcpp/ext/proto_server_reflection_plugin.h>

#include "grpc_test/services/ClientService.h"
#include "grpc_test/services/InvoiceService.h"
#include "grpc_test/services/ProductService.h"
#include "grpc_test/Logger.h"
#include "grpc_test/Database.h"
#include "grpc_test/Repository.h"

/* Populates the database `db' with provisional data for development purpose. */
static void populate_database(::gRPCTest::Core::Database &db) noexcept
{
  using namespace ::gRPCTest::Core;

  auto clients_repository = db.Repository<Models::Client>();

  clients_repository->InsertMany({
    { 1, "Jeremy Jeremy", "+505 0000 0000", "JeremyJeremy@outlook.com" },
    { 2, "Jeremy Alexander", "+505 0000 0000", "JeremyAlexander@outlook.com" },
    { 3, "Jeremy Fonseca", "+505 0000 0000", "JeremyFonseca@outlook.com" },
    { 4, "Jeremy Blanco", "+505 0000 0000", "JeremyBlanco@outlook.com" },
    { 5, "Alexander Jeremy", "+505 0000 0000", "AlexanderJeremy@outlook.com" },
    { 6, "Alexander Alexander", "+505 0000 0000", "AlexanderAlexander@outlook.com" },
    { 7, "Alexander Fonseca", "+505 0000 0000", "AlexanderFonseca@outlook.com" },
    { 8, "Alexander Blanco", "+505 0000 0000", "AlexanderBlanco@outlook.com" },
    { 9, "Fonseca Jeremy", "+505 0000 0000", "FonsecaJeremy@outlook.com" },
    { 10, "Fonseca Alexander", "+505 0000 0000", "FonsecaAlexander@outlook.com" },
    { 11, "Fonseca Fonseca", "+505 0000 0000", "FonsecaFonseca@outlook.com" },
    { 12, "Fonseca Blanco", "+505 0000 0000", "FonsecaBlanco@outlook.com" },
    { 13, "Blanco Jeremy", "+505 0000 0000", "BlancoJeremy@outlook.com" },
    { 14, "Blanco Alexander", "+505 0000 0000", "BlancoAlexander@outlook.com" },
    { 15, "Blanco Fonseca", "+505 0000 0000", "BlancoFonseca@outlook.com" },
    { 16, "Blanco Blanco", "+505 0000 0000", "BlancoBlanco@outlook.com" },
  });

  auto invoices_repository = db.Repository<Models::Invoice>();

  /* FIXME: Give a date different from now.  */

  invoices_repository->InsertMany({
    { 1, 1, "Invoice name 1", "Invoice address 1", std::chrono::high_resolution_clock::now() },
    { 2, 5, "Invoice name 2", "Invoice address 2", std::chrono::high_resolution_clock::now() },
    { 3, 10, "Invoice name 3", "Invoice address 3", std::chrono::high_resolution_clock::now() },
    { 4, 15, "Invoice name 4", "Invoice address 4", std::chrono::high_resolution_clock::now() },
    { 5, 10, "Invoice name 5", "Invoice address 5", std::chrono::high_resolution_clock::now() },
    { 6, 5, "Invoice name 6", "Invoice address 6", std::chrono::high_resolution_clock::now() },
    { 7, 1, "Invoice name 7", "Invoice address 7", std::chrono::high_resolution_clock::now() },
  });

  auto products_repository = db.Repository<Models::Product>();

  products_repository->InsertMany({
    { 1, "Computer", 1000 },
    { 2, "Mouse", 50 },
    { 3, "Keyboard", 150 },
    { 4, "Cellphone", 300 },
  });
}

auto main([[maybe_unused]] std::int32_t argc, [[maybe_unused]] char *argv[])
  -> std::int32_t
{
  const char *const uri = "0.0.0.0:2003";
  ::gRPCTest::Core::Database db;

  /* Previously register the tables of the database.  */

  db.RegisterRepository<::gRPCTest::Core::Models::Client>();
  db.RegisterRepository<::gRPCTest::Core::Models::Invoice>();
  db.RegisterRepository<::gRPCTest::Core::Models::Product>();

  /* Populate database with provisional data for
     development purpose.  */

  ::populate_database(db);

  ::gRPCTest::Core::Services::ClientService client_service { db };
  ::gRPCTest::Core::Services::InvoiceService invoice_service { db };
  ::gRPCTest::Core::Services::ProductService product_service { db };

  grpc::EnableDefaultHealthCheckService(true);

  grpc::ServerBuilder builder;

  builder.AddListeningPort(uri, grpc::InsecureServerCredentials());

  /* Register services.  */

  builder.RegisterService(std::addressof(client_service));
  builder.RegisterService(std::addressof(invoice_service));
  builder.RegisterService(std::addressof(product_service));

  std::unique_ptr<grpc::Server> server { builder.BuildAndStart() };

  ::gRPCTest::Logger::Log(stdout, "server is running at `%s'...", uri);
  server->Wait();

  return EXIT_SUCCESS;
}
