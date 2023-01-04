// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: models/Invoice.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_models_2fInvoice_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_models_2fInvoice_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021008 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "models/Client.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_models_2fInvoice_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_models_2fInvoice_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_models_2fInvoice_2eproto;
namespace gRPCTest {
namespace Protos {
namespace Models {
class Invoice;
struct InvoiceDefaultTypeInternal;
extern InvoiceDefaultTypeInternal _Invoice_default_instance_;
}  // namespace Models
}  // namespace Protos
}  // namespace gRPCTest
PROTOBUF_NAMESPACE_OPEN
template<> ::gRPCTest::Protos::Models::Invoice* Arena::CreateMaybeMessage<::gRPCTest::Protos::Models::Invoice>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace gRPCTest {
namespace Protos {
namespace Models {

// ===================================================================

class Invoice final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:gRPCTest.Protos.Models.Invoice) */ {
 public:
  inline Invoice() : Invoice(nullptr) {}
  ~Invoice() override;
  explicit PROTOBUF_CONSTEXPR Invoice(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Invoice(const Invoice& from);
  Invoice(Invoice&& from) noexcept
    : Invoice() {
    *this = ::std::move(from);
  }

  inline Invoice& operator=(const Invoice& from) {
    CopyFrom(from);
    return *this;
  }
  inline Invoice& operator=(Invoice&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Invoice& default_instance() {
    return *internal_default_instance();
  }
  static inline const Invoice* internal_default_instance() {
    return reinterpret_cast<const Invoice*>(
               &_Invoice_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Invoice& a, Invoice& b) {
    a.Swap(&b);
  }
  inline void Swap(Invoice* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Invoice* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Invoice* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Invoice>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Invoice& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Invoice& from) {
    Invoice::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Invoice* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "gRPCTest.Protos.Models.Invoice";
  }
  protected:
  explicit Invoice(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 2,
    kAddressFieldNumber = 3,
    kClientFieldNumber = 4,
    kIdFieldNumber = 1,
  };
  // string name = 2;
  void clear_name();
  const std::string& name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_name();
  PROTOBUF_NODISCARD std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // string address = 3;
  void clear_address();
  const std::string& address() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_address(ArgT0&& arg0, ArgT... args);
  std::string* mutable_address();
  PROTOBUF_NODISCARD std::string* release_address();
  void set_allocated_address(std::string* address);
  private:
  const std::string& _internal_address() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_address(const std::string& value);
  std::string* _internal_mutable_address();
  public:

  // .gRPCTest.Protos.Models.Client client = 4;
  bool has_client() const;
  private:
  bool _internal_has_client() const;
  public:
  void clear_client();
  const ::gRPCTest::Protos::Models::Client& client() const;
  PROTOBUF_NODISCARD ::gRPCTest::Protos::Models::Client* release_client();
  ::gRPCTest::Protos::Models::Client* mutable_client();
  void set_allocated_client(::gRPCTest::Protos::Models::Client* client);
  private:
  const ::gRPCTest::Protos::Models::Client& _internal_client() const;
  ::gRPCTest::Protos::Models::Client* _internal_mutable_client();
  public:
  void unsafe_arena_set_allocated_client(
      ::gRPCTest::Protos::Models::Client* client);
  ::gRPCTest::Protos::Models::Client* unsafe_arena_release_client();

  // int64 id = 1;
  void clear_id();
  int64_t id() const;
  void set_id(int64_t value);
  private:
  int64_t _internal_id() const;
  void _internal_set_id(int64_t value);
  public:

  // @@protoc_insertion_point(class_scope:gRPCTest.Protos.Models.Invoice)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr address_;
    ::gRPCTest::Protos::Models::Client* client_;
    int64_t id_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_models_2fInvoice_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Invoice

// int64 id = 1;
inline void Invoice::clear_id() {
  _impl_.id_ = int64_t{0};
}
inline int64_t Invoice::_internal_id() const {
  return _impl_.id_;
}
inline int64_t Invoice::id() const {
  // @@protoc_insertion_point(field_get:gRPCTest.Protos.Models.Invoice.id)
  return _internal_id();
}
inline void Invoice::_internal_set_id(int64_t value) {
  
  _impl_.id_ = value;
}
inline void Invoice::set_id(int64_t value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:gRPCTest.Protos.Models.Invoice.id)
}

// string name = 2;
inline void Invoice::clear_name() {
  _impl_.name_.ClearToEmpty();
}
inline const std::string& Invoice::name() const {
  // @@protoc_insertion_point(field_get:gRPCTest.Protos.Models.Invoice.name)
  return _internal_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Invoice::set_name(ArgT0&& arg0, ArgT... args) {
 
 _impl_.name_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:gRPCTest.Protos.Models.Invoice.name)
}
inline std::string* Invoice::mutable_name() {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:gRPCTest.Protos.Models.Invoice.name)
  return _s;
}
inline const std::string& Invoice::_internal_name() const {
  return _impl_.name_.Get();
}
inline void Invoice::_internal_set_name(const std::string& value) {
  
  _impl_.name_.Set(value, GetArenaForAllocation());
}
inline std::string* Invoice::_internal_mutable_name() {
  
  return _impl_.name_.Mutable(GetArenaForAllocation());
}
inline std::string* Invoice::release_name() {
  // @@protoc_insertion_point(field_release:gRPCTest.Protos.Models.Invoice.name)
  return _impl_.name_.Release();
}
inline void Invoice::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  _impl_.name_.SetAllocated(name, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.name_.IsDefault()) {
    _impl_.name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:gRPCTest.Protos.Models.Invoice.name)
}

// string address = 3;
inline void Invoice::clear_address() {
  _impl_.address_.ClearToEmpty();
}
inline const std::string& Invoice::address() const {
  // @@protoc_insertion_point(field_get:gRPCTest.Protos.Models.Invoice.address)
  return _internal_address();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Invoice::set_address(ArgT0&& arg0, ArgT... args) {
 
 _impl_.address_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:gRPCTest.Protos.Models.Invoice.address)
}
inline std::string* Invoice::mutable_address() {
  std::string* _s = _internal_mutable_address();
  // @@protoc_insertion_point(field_mutable:gRPCTest.Protos.Models.Invoice.address)
  return _s;
}
inline const std::string& Invoice::_internal_address() const {
  return _impl_.address_.Get();
}
inline void Invoice::_internal_set_address(const std::string& value) {
  
  _impl_.address_.Set(value, GetArenaForAllocation());
}
inline std::string* Invoice::_internal_mutable_address() {
  
  return _impl_.address_.Mutable(GetArenaForAllocation());
}
inline std::string* Invoice::release_address() {
  // @@protoc_insertion_point(field_release:gRPCTest.Protos.Models.Invoice.address)
  return _impl_.address_.Release();
}
inline void Invoice::set_allocated_address(std::string* address) {
  if (address != nullptr) {
    
  } else {
    
  }
  _impl_.address_.SetAllocated(address, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.address_.IsDefault()) {
    _impl_.address_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:gRPCTest.Protos.Models.Invoice.address)
}

// .gRPCTest.Protos.Models.Client client = 4;
inline bool Invoice::_internal_has_client() const {
  return this != internal_default_instance() && _impl_.client_ != nullptr;
}
inline bool Invoice::has_client() const {
  return _internal_has_client();
}
inline const ::gRPCTest::Protos::Models::Client& Invoice::_internal_client() const {
  const ::gRPCTest::Protos::Models::Client* p = _impl_.client_;
  return p != nullptr ? *p : reinterpret_cast<const ::gRPCTest::Protos::Models::Client&>(
      ::gRPCTest::Protos::Models::_Client_default_instance_);
}
inline const ::gRPCTest::Protos::Models::Client& Invoice::client() const {
  // @@protoc_insertion_point(field_get:gRPCTest.Protos.Models.Invoice.client)
  return _internal_client();
}
inline void Invoice::unsafe_arena_set_allocated_client(
    ::gRPCTest::Protos::Models::Client* client) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.client_);
  }
  _impl_.client_ = client;
  if (client) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:gRPCTest.Protos.Models.Invoice.client)
}
inline ::gRPCTest::Protos::Models::Client* Invoice::release_client() {
  
  ::gRPCTest::Protos::Models::Client* temp = _impl_.client_;
  _impl_.client_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::gRPCTest::Protos::Models::Client* Invoice::unsafe_arena_release_client() {
  // @@protoc_insertion_point(field_release:gRPCTest.Protos.Models.Invoice.client)
  
  ::gRPCTest::Protos::Models::Client* temp = _impl_.client_;
  _impl_.client_ = nullptr;
  return temp;
}
inline ::gRPCTest::Protos::Models::Client* Invoice::_internal_mutable_client() {
  
  if (_impl_.client_ == nullptr) {
    auto* p = CreateMaybeMessage<::gRPCTest::Protos::Models::Client>(GetArenaForAllocation());
    _impl_.client_ = p;
  }
  return _impl_.client_;
}
inline ::gRPCTest::Protos::Models::Client* Invoice::mutable_client() {
  ::gRPCTest::Protos::Models::Client* _msg = _internal_mutable_client();
  // @@protoc_insertion_point(field_mutable:gRPCTest.Protos.Models.Invoice.client)
  return _msg;
}
inline void Invoice::set_allocated_client(::gRPCTest::Protos::Models::Client* client) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.client_);
  }
  if (client) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(client));
    if (message_arena != submessage_arena) {
      client = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, client, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.client_ = client;
  // @@protoc_insertion_point(field_set_allocated:gRPCTest.Protos.Models.Invoice.client)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace Models
}  // namespace Protos
}  // namespace gRPCTest

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_models_2fInvoice_2eproto