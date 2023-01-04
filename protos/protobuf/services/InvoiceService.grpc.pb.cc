// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: services/InvoiceService.proto

#include "services/InvoiceService.pb.h"
#include "services/InvoiceService.grpc.pb.h"

#include <functional>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace gRPCTest {
namespace Protos {
namespace Services {

static const char* InvoiceService_method_names[] = {
  "/gRPCTest.Protos.Services.InvoiceService/RegisterInvoice",
  "/gRPCTest.Protos.Services.InvoiceService/FetchInvoiceById",
  "/gRPCTest.Protos.Services.InvoiceService/FetchInvoiceByDate",
  "/gRPCTest.Protos.Services.InvoiceService/FetchInvoiceDetails",
  "/gRPCTest.Protos.Services.InvoiceService/FetchInvoices",
};

std::unique_ptr< InvoiceService::Stub> InvoiceService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< InvoiceService::Stub> stub(new InvoiceService::Stub(channel, options));
  return stub;
}

InvoiceService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_RegisterInvoice_(InvoiceService_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_FetchInvoiceById_(InvoiceService_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_FetchInvoiceByDate_(InvoiceService_method_names[2], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_FetchInvoiceDetails_(InvoiceService_method_names[3], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_FetchInvoices_(InvoiceService_method_names[4], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status InvoiceService::Stub::RegisterInvoice(::grpc::ClientContext* context, const ::gRPCTest::Protos::Models::Invoice& request, ::gRPCTest::Protos::Services::RegisterInvoiceResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::gRPCTest::Protos::Models::Invoice, ::gRPCTest::Protos::Services::RegisterInvoiceResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_RegisterInvoice_, context, request, response);
}

void InvoiceService::Stub::async::RegisterInvoice(::grpc::ClientContext* context, const ::gRPCTest::Protos::Models::Invoice* request, ::gRPCTest::Protos::Services::RegisterInvoiceResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::gRPCTest::Protos::Models::Invoice, ::gRPCTest::Protos::Services::RegisterInvoiceResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_RegisterInvoice_, context, request, response, std::move(f));
}

void InvoiceService::Stub::async::RegisterInvoice(::grpc::ClientContext* context, const ::gRPCTest::Protos::Models::Invoice* request, ::gRPCTest::Protos::Services::RegisterInvoiceResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_RegisterInvoice_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::gRPCTest::Protos::Services::RegisterInvoiceResponse>* InvoiceService::Stub::PrepareAsyncRegisterInvoiceRaw(::grpc::ClientContext* context, const ::gRPCTest::Protos::Models::Invoice& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::gRPCTest::Protos::Services::RegisterInvoiceResponse, ::gRPCTest::Protos::Models::Invoice, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_RegisterInvoice_, context, request);
}

::grpc::ClientAsyncResponseReader< ::gRPCTest::Protos::Services::RegisterInvoiceResponse>* InvoiceService::Stub::AsyncRegisterInvoiceRaw(::grpc::ClientContext* context, const ::gRPCTest::Protos::Models::Invoice& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncRegisterInvoiceRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status InvoiceService::Stub::FetchInvoiceById(::grpc::ClientContext* context, const ::gRPCTest::Protos::Services::InvoiceByIdRequest& request, ::gRPCTest::Protos::Services::FetchInvoiceByIdResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::gRPCTest::Protos::Services::InvoiceByIdRequest, ::gRPCTest::Protos::Services::FetchInvoiceByIdResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_FetchInvoiceById_, context, request, response);
}

void InvoiceService::Stub::async::FetchInvoiceById(::grpc::ClientContext* context, const ::gRPCTest::Protos::Services::InvoiceByIdRequest* request, ::gRPCTest::Protos::Services::FetchInvoiceByIdResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::gRPCTest::Protos::Services::InvoiceByIdRequest, ::gRPCTest::Protos::Services::FetchInvoiceByIdResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_FetchInvoiceById_, context, request, response, std::move(f));
}

void InvoiceService::Stub::async::FetchInvoiceById(::grpc::ClientContext* context, const ::gRPCTest::Protos::Services::InvoiceByIdRequest* request, ::gRPCTest::Protos::Services::FetchInvoiceByIdResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_FetchInvoiceById_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::gRPCTest::Protos::Services::FetchInvoiceByIdResponse>* InvoiceService::Stub::PrepareAsyncFetchInvoiceByIdRaw(::grpc::ClientContext* context, const ::gRPCTest::Protos::Services::InvoiceByIdRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::gRPCTest::Protos::Services::FetchInvoiceByIdResponse, ::gRPCTest::Protos::Services::InvoiceByIdRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_FetchInvoiceById_, context, request);
}

::grpc::ClientAsyncResponseReader< ::gRPCTest::Protos::Services::FetchInvoiceByIdResponse>* InvoiceService::Stub::AsyncFetchInvoiceByIdRaw(::grpc::ClientContext* context, const ::gRPCTest::Protos::Services::InvoiceByIdRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncFetchInvoiceByIdRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status InvoiceService::Stub::FetchInvoiceByDate(::grpc::ClientContext* context, const ::gRPCTest::Protos::Services::FetchInvoiceByDateRequest& request, ::gRPCTest::Protos::Services::FetchInvoiceByDateResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::gRPCTest::Protos::Services::FetchInvoiceByDateRequest, ::gRPCTest::Protos::Services::FetchInvoiceByDateResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_FetchInvoiceByDate_, context, request, response);
}

void InvoiceService::Stub::async::FetchInvoiceByDate(::grpc::ClientContext* context, const ::gRPCTest::Protos::Services::FetchInvoiceByDateRequest* request, ::gRPCTest::Protos::Services::FetchInvoiceByDateResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::gRPCTest::Protos::Services::FetchInvoiceByDateRequest, ::gRPCTest::Protos::Services::FetchInvoiceByDateResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_FetchInvoiceByDate_, context, request, response, std::move(f));
}

void InvoiceService::Stub::async::FetchInvoiceByDate(::grpc::ClientContext* context, const ::gRPCTest::Protos::Services::FetchInvoiceByDateRequest* request, ::gRPCTest::Protos::Services::FetchInvoiceByDateResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_FetchInvoiceByDate_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::gRPCTest::Protos::Services::FetchInvoiceByDateResponse>* InvoiceService::Stub::PrepareAsyncFetchInvoiceByDateRaw(::grpc::ClientContext* context, const ::gRPCTest::Protos::Services::FetchInvoiceByDateRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::gRPCTest::Protos::Services::FetchInvoiceByDateResponse, ::gRPCTest::Protos::Services::FetchInvoiceByDateRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_FetchInvoiceByDate_, context, request);
}

::grpc::ClientAsyncResponseReader< ::gRPCTest::Protos::Services::FetchInvoiceByDateResponse>* InvoiceService::Stub::AsyncFetchInvoiceByDateRaw(::grpc::ClientContext* context, const ::gRPCTest::Protos::Services::FetchInvoiceByDateRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncFetchInvoiceByDateRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status InvoiceService::Stub::FetchInvoiceDetails(::grpc::ClientContext* context, const ::gRPCTest::Protos::Services::InvoiceByIdRequest& request, ::gRPCTest::Protos::Services::FetchInvoiceDetailsResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::gRPCTest::Protos::Services::InvoiceByIdRequest, ::gRPCTest::Protos::Services::FetchInvoiceDetailsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_FetchInvoiceDetails_, context, request, response);
}

void InvoiceService::Stub::async::FetchInvoiceDetails(::grpc::ClientContext* context, const ::gRPCTest::Protos::Services::InvoiceByIdRequest* request, ::gRPCTest::Protos::Services::FetchInvoiceDetailsResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::gRPCTest::Protos::Services::InvoiceByIdRequest, ::gRPCTest::Protos::Services::FetchInvoiceDetailsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_FetchInvoiceDetails_, context, request, response, std::move(f));
}

void InvoiceService::Stub::async::FetchInvoiceDetails(::grpc::ClientContext* context, const ::gRPCTest::Protos::Services::InvoiceByIdRequest* request, ::gRPCTest::Protos::Services::FetchInvoiceDetailsResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_FetchInvoiceDetails_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::gRPCTest::Protos::Services::FetchInvoiceDetailsResponse>* InvoiceService::Stub::PrepareAsyncFetchInvoiceDetailsRaw(::grpc::ClientContext* context, const ::gRPCTest::Protos::Services::InvoiceByIdRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::gRPCTest::Protos::Services::FetchInvoiceDetailsResponse, ::gRPCTest::Protos::Services::InvoiceByIdRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_FetchInvoiceDetails_, context, request);
}

::grpc::ClientAsyncResponseReader< ::gRPCTest::Protos::Services::FetchInvoiceDetailsResponse>* InvoiceService::Stub::AsyncFetchInvoiceDetailsRaw(::grpc::ClientContext* context, const ::gRPCTest::Protos::Services::InvoiceByIdRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncFetchInvoiceDetailsRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status InvoiceService::Stub::FetchInvoices(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::gRPCTest::Protos::Services::FetchInvoicesResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::google::protobuf::Empty, ::gRPCTest::Protos::Services::FetchInvoicesResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_FetchInvoices_, context, request, response);
}

void InvoiceService::Stub::async::FetchInvoices(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::gRPCTest::Protos::Services::FetchInvoicesResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::google::protobuf::Empty, ::gRPCTest::Protos::Services::FetchInvoicesResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_FetchInvoices_, context, request, response, std::move(f));
}

void InvoiceService::Stub::async::FetchInvoices(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::gRPCTest::Protos::Services::FetchInvoicesResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_FetchInvoices_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::gRPCTest::Protos::Services::FetchInvoicesResponse>* InvoiceService::Stub::PrepareAsyncFetchInvoicesRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::gRPCTest::Protos::Services::FetchInvoicesResponse, ::google::protobuf::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_FetchInvoices_, context, request);
}

::grpc::ClientAsyncResponseReader< ::gRPCTest::Protos::Services::FetchInvoicesResponse>* InvoiceService::Stub::AsyncFetchInvoicesRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncFetchInvoicesRaw(context, request, cq);
  result->StartCall();
  return result;
}

InvoiceService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      InvoiceService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< InvoiceService::Service, ::gRPCTest::Protos::Models::Invoice, ::gRPCTest::Protos::Services::RegisterInvoiceResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](InvoiceService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::gRPCTest::Protos::Models::Invoice* req,
             ::gRPCTest::Protos::Services::RegisterInvoiceResponse* resp) {
               return service->RegisterInvoice(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      InvoiceService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< InvoiceService::Service, ::gRPCTest::Protos::Services::InvoiceByIdRequest, ::gRPCTest::Protos::Services::FetchInvoiceByIdResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](InvoiceService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::gRPCTest::Protos::Services::InvoiceByIdRequest* req,
             ::gRPCTest::Protos::Services::FetchInvoiceByIdResponse* resp) {
               return service->FetchInvoiceById(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      InvoiceService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< InvoiceService::Service, ::gRPCTest::Protos::Services::FetchInvoiceByDateRequest, ::gRPCTest::Protos::Services::FetchInvoiceByDateResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](InvoiceService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::gRPCTest::Protos::Services::FetchInvoiceByDateRequest* req,
             ::gRPCTest::Protos::Services::FetchInvoiceByDateResponse* resp) {
               return service->FetchInvoiceByDate(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      InvoiceService_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< InvoiceService::Service, ::gRPCTest::Protos::Services::InvoiceByIdRequest, ::gRPCTest::Protos::Services::FetchInvoiceDetailsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](InvoiceService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::gRPCTest::Protos::Services::InvoiceByIdRequest* req,
             ::gRPCTest::Protos::Services::FetchInvoiceDetailsResponse* resp) {
               return service->FetchInvoiceDetails(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      InvoiceService_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< InvoiceService::Service, ::google::protobuf::Empty, ::gRPCTest::Protos::Services::FetchInvoicesResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](InvoiceService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::google::protobuf::Empty* req,
             ::gRPCTest::Protos::Services::FetchInvoicesResponse* resp) {
               return service->FetchInvoices(ctx, req, resp);
             }, this)));
}

InvoiceService::Service::~Service() {
}

::grpc::Status InvoiceService::Service::RegisterInvoice(::grpc::ServerContext* context, const ::gRPCTest::Protos::Models::Invoice* request, ::gRPCTest::Protos::Services::RegisterInvoiceResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status InvoiceService::Service::FetchInvoiceById(::grpc::ServerContext* context, const ::gRPCTest::Protos::Services::InvoiceByIdRequest* request, ::gRPCTest::Protos::Services::FetchInvoiceByIdResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status InvoiceService::Service::FetchInvoiceByDate(::grpc::ServerContext* context, const ::gRPCTest::Protos::Services::FetchInvoiceByDateRequest* request, ::gRPCTest::Protos::Services::FetchInvoiceByDateResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status InvoiceService::Service::FetchInvoiceDetails(::grpc::ServerContext* context, const ::gRPCTest::Protos::Services::InvoiceByIdRequest* request, ::gRPCTest::Protos::Services::FetchInvoiceDetailsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status InvoiceService::Service::FetchInvoices(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::gRPCTest::Protos::Services::FetchInvoicesResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace gRPCTest
}  // namespace Protos
}  // namespace Services

