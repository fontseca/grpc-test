// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: common/ServiceStatus.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_common_2fServiceStatus_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_common_2fServiceStatus_2eproto

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
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_common_2fServiceStatus_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_common_2fServiceStatus_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_common_2fServiceStatus_2eproto;
namespace gRPCTest {
namespace Protos {
namespace Services {
class ServiceStatus;
struct ServiceStatusDefaultTypeInternal;
extern ServiceStatusDefaultTypeInternal _ServiceStatus_default_instance_;
}  // namespace Services
}  // namespace Protos
}  // namespace gRPCTest
PROTOBUF_NAMESPACE_OPEN
template<> ::gRPCTest::Protos::Services::ServiceStatus* Arena::CreateMaybeMessage<::gRPCTest::Protos::Services::ServiceStatus>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace gRPCTest {
namespace Protos {
namespace Services {

// ===================================================================

class ServiceStatus final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:gRPCTest.Protos.Services.ServiceStatus) */ {
 public:
  inline ServiceStatus() : ServiceStatus(nullptr) {}
  ~ServiceStatus() override;
  explicit PROTOBUF_CONSTEXPR ServiceStatus(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ServiceStatus(const ServiceStatus& from);
  ServiceStatus(ServiceStatus&& from) noexcept
    : ServiceStatus() {
    *this = ::std::move(from);
  }

  inline ServiceStatus& operator=(const ServiceStatus& from) {
    CopyFrom(from);
    return *this;
  }
  inline ServiceStatus& operator=(ServiceStatus&& from) noexcept {
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
  static const ServiceStatus& default_instance() {
    return *internal_default_instance();
  }
  static inline const ServiceStatus* internal_default_instance() {
    return reinterpret_cast<const ServiceStatus*>(
               &_ServiceStatus_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ServiceStatus& a, ServiceStatus& b) {
    a.Swap(&b);
  }
  inline void Swap(ServiceStatus* other) {
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
  void UnsafeArenaSwap(ServiceStatus* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ServiceStatus* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ServiceStatus>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const ServiceStatus& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const ServiceStatus& from) {
    ServiceStatus::MergeImpl(*this, from);
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
  void InternalSwap(ServiceStatus* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "gRPCTest.Protos.Services.ServiceStatus";
  }
  protected:
  explicit ServiceStatus(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kErrorMessageFieldNumber = 3,
    kSuccessfulFieldNumber = 1,
    kErrorCodeFieldNumber = 2,
  };
  // string error_message = 3;
  void clear_error_message();
  const std::string& error_message() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_error_message(ArgT0&& arg0, ArgT... args);
  std::string* mutable_error_message();
  PROTOBUF_NODISCARD std::string* release_error_message();
  void set_allocated_error_message(std::string* error_message);
  private:
  const std::string& _internal_error_message() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_error_message(const std::string& value);
  std::string* _internal_mutable_error_message();
  public:

  // bool successful = 1;
  void clear_successful();
  bool successful() const;
  void set_successful(bool value);
  private:
  bool _internal_successful() const;
  void _internal_set_successful(bool value);
  public:

  // int32 error_code = 2;
  void clear_error_code();
  int32_t error_code() const;
  void set_error_code(int32_t value);
  private:
  int32_t _internal_error_code() const;
  void _internal_set_error_code(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:gRPCTest.Protos.Services.ServiceStatus)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr error_message_;
    bool successful_;
    int32_t error_code_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_common_2fServiceStatus_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ServiceStatus

// bool successful = 1;
inline void ServiceStatus::clear_successful() {
  _impl_.successful_ = false;
}
inline bool ServiceStatus::_internal_successful() const {
  return _impl_.successful_;
}
inline bool ServiceStatus::successful() const {
  // @@protoc_insertion_point(field_get:gRPCTest.Protos.Services.ServiceStatus.successful)
  return _internal_successful();
}
inline void ServiceStatus::_internal_set_successful(bool value) {
  
  _impl_.successful_ = value;
}
inline void ServiceStatus::set_successful(bool value) {
  _internal_set_successful(value);
  // @@protoc_insertion_point(field_set:gRPCTest.Protos.Services.ServiceStatus.successful)
}

// int32 error_code = 2;
inline void ServiceStatus::clear_error_code() {
  _impl_.error_code_ = 0;
}
inline int32_t ServiceStatus::_internal_error_code() const {
  return _impl_.error_code_;
}
inline int32_t ServiceStatus::error_code() const {
  // @@protoc_insertion_point(field_get:gRPCTest.Protos.Services.ServiceStatus.error_code)
  return _internal_error_code();
}
inline void ServiceStatus::_internal_set_error_code(int32_t value) {
  
  _impl_.error_code_ = value;
}
inline void ServiceStatus::set_error_code(int32_t value) {
  _internal_set_error_code(value);
  // @@protoc_insertion_point(field_set:gRPCTest.Protos.Services.ServiceStatus.error_code)
}

// string error_message = 3;
inline void ServiceStatus::clear_error_message() {
  _impl_.error_message_.ClearToEmpty();
}
inline const std::string& ServiceStatus::error_message() const {
  // @@protoc_insertion_point(field_get:gRPCTest.Protos.Services.ServiceStatus.error_message)
  return _internal_error_message();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void ServiceStatus::set_error_message(ArgT0&& arg0, ArgT... args) {
 
 _impl_.error_message_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:gRPCTest.Protos.Services.ServiceStatus.error_message)
}
inline std::string* ServiceStatus::mutable_error_message() {
  std::string* _s = _internal_mutable_error_message();
  // @@protoc_insertion_point(field_mutable:gRPCTest.Protos.Services.ServiceStatus.error_message)
  return _s;
}
inline const std::string& ServiceStatus::_internal_error_message() const {
  return _impl_.error_message_.Get();
}
inline void ServiceStatus::_internal_set_error_message(const std::string& value) {
  
  _impl_.error_message_.Set(value, GetArenaForAllocation());
}
inline std::string* ServiceStatus::_internal_mutable_error_message() {
  
  return _impl_.error_message_.Mutable(GetArenaForAllocation());
}
inline std::string* ServiceStatus::release_error_message() {
  // @@protoc_insertion_point(field_release:gRPCTest.Protos.Services.ServiceStatus.error_message)
  return _impl_.error_message_.Release();
}
inline void ServiceStatus::set_allocated_error_message(std::string* error_message) {
  if (error_message != nullptr) {
    
  } else {
    
  }
  _impl_.error_message_.SetAllocated(error_message, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.error_message_.IsDefault()) {
    _impl_.error_message_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:gRPCTest.Protos.Services.ServiceStatus.error_message)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace Services
}  // namespace Protos
}  // namespace gRPCTest

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_common_2fServiceStatus_2eproto