// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: services/ProductService.proto

#include "services/ProductService.pb.h"
#include "services/ProductService.grpc.pb.h"

#include <grpcpp/support/async_stream.h>
#include <grpcpp/impl/codegen/sync_stream.h>
#include <gmock/gmock.h>
namespace gRPCTest {
namespace Protos {
namespace Services {

class MockProductServiceStub : public ProductService::StubInterface {
 public:
  MOCK_METHOD3(CreateProduct, ::grpc::Status(::grpc::ClientContext* context, const ::gRPCTest::Protos::Models::Product& request, ::gRPCTest::Protos::Services::CreateProductResponse* response));
  MOCK_METHOD3(AsyncCreateProductRaw, ::grpc::ClientAsyncResponseReaderInterface< ::gRPCTest::Protos::Services::CreateProductResponse>*(::grpc::ClientContext* context, const ::gRPCTest::Protos::Models::Product& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(PrepareAsyncCreateProductRaw, ::grpc::ClientAsyncResponseReaderInterface< ::gRPCTest::Protos::Services::CreateProductResponse>*(::grpc::ClientContext* context, const ::gRPCTest::Protos::Models::Product& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(FetchProduct, ::grpc::Status(::grpc::ClientContext* context, const ::gRPCTest::Protos::Services::ProductByIdRequest& request, ::gRPCTest::Protos::Services::FetchProductResponse* response));
  MOCK_METHOD3(AsyncFetchProductRaw, ::grpc::ClientAsyncResponseReaderInterface< ::gRPCTest::Protos::Services::FetchProductResponse>*(::grpc::ClientContext* context, const ::gRPCTest::Protos::Services::ProductByIdRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(PrepareAsyncFetchProductRaw, ::grpc::ClientAsyncResponseReaderInterface< ::gRPCTest::Protos::Services::FetchProductResponse>*(::grpc::ClientContext* context, const ::gRPCTest::Protos::Services::ProductByIdRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(FetchProducts, ::grpc::Status(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::gRPCTest::Protos::Services::FetchProductsResponse* response));
  MOCK_METHOD3(AsyncFetchProductsRaw, ::grpc::ClientAsyncResponseReaderInterface< ::gRPCTest::Protos::Services::FetchProductsResponse>*(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(PrepareAsyncFetchProductsRaw, ::grpc::ClientAsyncResponseReaderInterface< ::gRPCTest::Protos::Services::FetchProductsResponse>*(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(FetchProductsByPrice, ::grpc::Status(::grpc::ClientContext* context, const ::gRPCTest::Protos::Services::ProductPriceRequest& request, ::gRPCTest::Protos::Services::FetchProductsResponse* response));
  MOCK_METHOD3(AsyncFetchProductsByPriceRaw, ::grpc::ClientAsyncResponseReaderInterface< ::gRPCTest::Protos::Services::FetchProductsResponse>*(::grpc::ClientContext* context, const ::gRPCTest::Protos::Services::ProductPriceRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(PrepareAsyncFetchProductsByPriceRaw, ::grpc::ClientAsyncResponseReaderInterface< ::gRPCTest::Protos::Services::FetchProductsResponse>*(::grpc::ClientContext* context, const ::gRPCTest::Protos::Services::ProductPriceRequest& request, ::grpc::CompletionQueue* cq));
};

} // namespace gRPCTest
} // namespace Protos
} // namespace Services
