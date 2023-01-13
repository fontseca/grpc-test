#ifndef PRODUCT_SERVICE_H
#define PRODUCT_SERVICE_H

#include <cstdio>
#include <cstddef>
#include <deque>
#include <chrono>

#include <grpc++/grpc++.h>

#include "grpc_test/models/Product.h"
#include "grpc_test/Logger.h"
#include "grpc_test/Database.h"
#include "protobuf/services/ProductService.grpc.pb.h"

namespace gRPCTest::Core::Services
{
  class ProductService final : public ::gRPCTest::Protos::Services::ProductService::Service
  {
  public:
    explicit inline ProductService(::gRPCTest::Core::Database &database) noexcept
      : m_database { database }
    { }

  private:
    virtual ::grpc::Status CreateProduct([[maybe_unused]] ::grpc::ServerContext* context,
      const ::gRPCTest::Protos::Models::Product* request,
        ::gRPCTest::Protos::Services::CreateProductResponse* response)
    {
      gRPCTest::Logger::Log(stdout, "making a new product...");

      auto repository = m_database.Repository<::gRPCTest::Core::Models::Product>();
      const std::size_t previouse_data_store_size = repository->Size();

      gRPCTest::Core::Models::Product new_product
      {
        .id = static_cast<std::uint64_t>(request->id()),
        .name = request->name(),
        .price = request->price()
      };

      auto product_response = new gRPCTest::Protos::Models::Product;

      product_response->set_id(new_product.id);
      product_response->set_name(new_product.name);
      product_response->set_price(new_product.price);

      response->set_allocated_product(product_response);
      repository->InsertOne(new_product);

      if (repository->Size() > previouse_data_store_size)
      {
        response->mutable_error_status()->set_successful(true);
        return ::grpc::Status(grpc::StatusCode::OK, "Product created");
      }

      response->mutable_error_status()->set_successful(true);
      response->mutable_error_status()->set_error_code(500);
      response->mutable_error_status()->set_error_message("Product was not created");
      return ::grpc::Status(grpc::StatusCode::INTERNAL, "Product was not created");
    }

    virtual ::grpc::Status FetchProduct([[maybe_unused]] ::grpc::ServerContext* context,
      const ::gRPCTest::Protos::Services::ProductByIdRequest* request,
        ::gRPCTest::Protos::Services::FetchProductResponse* response)
    {
      const std::uint64_t id = request->product_id();
      gRPCTest::Logger::Log(stdout, "fetching product with id `%lu'...", id);

      auto repository = m_database.Repository<::gRPCTest::Core::Models::Product>();

      const auto query = repository->Find(
        [&id](const ::gRPCTest::Core::Models::Product &product)
      {
        return product.id == id;
      });
      
      if (query)
      {
        const auto product = query.value();
        auto new_product = new gRPCTest::Protos::Models::Product;
        new_product->set_id(product.id);
        new_product->set_name(product.name);
        new_product->set_price(product.price);
        response->set_allocated_product(new_product);
        return ::grpc::Status::OK;
      }

      return ::grpc::Status(::grpc::StatusCode::NOT_FOUND, "Product was not found.");
    }

    virtual ::grpc::Status FetchProducts([[maybe_unused]] ::grpc::ServerContext* context,
      [[maybe_unused]] const ::google::protobuf::Empty* request,
        ::gRPCTest::Protos::Services::FetchProductsResponse* response)
    {
      using namespace ::gRPCTest::Core;

     gRPCTest::Logger::Log(stdout, "fetching products...");

      for (const auto &product
        : m_database.Repository<Models::Product>()->SelectAll())
      {
        auto grpc_product = response->add_products();
        grpc_product->set_id(product.id);
        grpc_product->set_name(product.name);
        grpc_product->set_price(product.price);
      }

      return ::grpc::Status::OK;
    }

    virtual ::grpc::Status FetchProductsByPrice([[maybe_unused]] ::grpc::ServerContext* context,
      const ::gRPCTest::Protos::Services::ProductPriceRequest* request,
        ::gRPCTest::Protos::Services::FetchProductsResponse* response)
    {
      const double price = request->product_price();
      gRPCTest::Logger::Log(stdout, "fetching product whose price is >= %f...", price);

      for (const auto &product
        : m_database.Repository<::gRPCTest::Core::Models::Product>()->SelectAll())
      {
        if (product.price >= price)
        {
          auto grpc_product = response->add_products();
          grpc_product->set_id(product.id);
          grpc_product->set_name(product.name);
          grpc_product->set_price(product.price);
        }
      }

      return ::grpc::Status::OK;
    }

  private:
    ::gRPCTest::Core::Database &m_database;
  };
}

#endif /* PRODUCT_SERVICE_H */
