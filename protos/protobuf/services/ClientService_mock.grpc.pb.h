// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: services/ClientService.proto

#include "services/ClientService.pb.h"
#include "services/ClientService.grpc.pb.h"

#include <grpcpp/support/async_stream.h>
#include <grpcpp/impl/codegen/sync_stream.h>
#include <gmock/gmock.h>
namespace gRPCTest {
namespace Protos {
namespace Services {

class MockClientServiceStub : public ClientService::StubInterface {
 public:
  MOCK_METHOD3(CreateClient, ::grpc::Status(::grpc::ClientContext* context, const ::gRPCTest::Protos::Models::Client& request, ::gRPCTest::Protos::Services::CreateClientResponse* response));
  MOCK_METHOD3(AsyncCreateClientRaw, ::grpc::ClientAsyncResponseReaderInterface< ::gRPCTest::Protos::Services::CreateClientResponse>*(::grpc::ClientContext* context, const ::gRPCTest::Protos::Models::Client& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(PrepareAsyncCreateClientRaw, ::grpc::ClientAsyncResponseReaderInterface< ::gRPCTest::Protos::Services::CreateClientResponse>*(::grpc::ClientContext* context, const ::gRPCTest::Protos::Models::Client& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(ListClient, ::grpc::Status(::grpc::ClientContext* context, const ::gRPCTest::Protos::Services::ClientByIdRequest& request, ::gRPCTest::Protos::Services::ListClientResponse* response));
  MOCK_METHOD3(AsyncListClientRaw, ::grpc::ClientAsyncResponseReaderInterface< ::gRPCTest::Protos::Services::ListClientResponse>*(::grpc::ClientContext* context, const ::gRPCTest::Protos::Services::ClientByIdRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(PrepareAsyncListClientRaw, ::grpc::ClientAsyncResponseReaderInterface< ::gRPCTest::Protos::Services::ListClientResponse>*(::grpc::ClientContext* context, const ::gRPCTest::Protos::Services::ClientByIdRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(FetchAllClients, ::grpc::Status(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::gRPCTest::Protos::Services::FetchAllClientsResponse* response));
  MOCK_METHOD3(AsyncFetchAllClientsRaw, ::grpc::ClientAsyncResponseReaderInterface< ::gRPCTest::Protos::Services::FetchAllClientsResponse>*(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(PrepareAsyncFetchAllClientsRaw, ::grpc::ClientAsyncResponseReaderInterface< ::gRPCTest::Protos::Services::FetchAllClientsResponse>*(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(FetchClientInvoices, ::grpc::Status(::grpc::ClientContext* context, const ::gRPCTest::Protos::Services::ClientByIdRequest& request, ::gRPCTest::Protos::Services::FetchClientInvoicesResponse* response));
  MOCK_METHOD3(AsyncFetchClientInvoicesRaw, ::grpc::ClientAsyncResponseReaderInterface< ::gRPCTest::Protos::Services::FetchClientInvoicesResponse>*(::grpc::ClientContext* context, const ::gRPCTest::Protos::Services::ClientByIdRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(PrepareAsyncFetchClientInvoicesRaw, ::grpc::ClientAsyncResponseReaderInterface< ::gRPCTest::Protos::Services::FetchClientInvoicesResponse>*(::grpc::ClientContext* context, const ::gRPCTest::Protos::Services::ClientByIdRequest& request, ::grpc::CompletionQueue* cq));
};

} // namespace gRPCTest
} // namespace Protos
} // namespace Services

