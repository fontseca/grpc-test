// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: InvoiceDetails.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_InvoiceDetails_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_InvoiceDetails_2eproto

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
#include "Product.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_InvoiceDetails_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_InvoiceDetails_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_InvoiceDetails_2eproto;
namespace gRCPTest {
namespace Protos {
namespace Models {
class InvoiceDetails;
struct InvoiceDetailsDefaultTypeInternal;
extern InvoiceDetailsDefaultTypeInternal _InvoiceDetails_default_instance_;
}  // namespace Models
}  // namespace Protos
}  // namespace gRCPTest
PROTOBUF_NAMESPACE_OPEN
template<> ::gRCPTest::Protos::Models::InvoiceDetails* Arena::CreateMaybeMessage<::gRCPTest::Protos::Models::InvoiceDetails>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace gRCPTest {
namespace Protos {
namespace Models {

// ===================================================================

class InvoiceDetails final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:gRCPTest.Protos.Models.InvoiceDetails) */ {
 public:
  inline InvoiceDetails() : InvoiceDetails(nullptr) {}
  ~InvoiceDetails() override;
  explicit PROTOBUF_CONSTEXPR InvoiceDetails(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  InvoiceDetails(const InvoiceDetails& from);
  InvoiceDetails(InvoiceDetails&& from) noexcept
    : InvoiceDetails() {
    *this = ::std::move(from);
  }

  inline InvoiceDetails& operator=(const InvoiceDetails& from) {
    CopyFrom(from);
    return *this;
  }
  inline InvoiceDetails& operator=(InvoiceDetails&& from) noexcept {
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
  static const InvoiceDetails& default_instance() {
    return *internal_default_instance();
  }
  static inline const InvoiceDetails* internal_default_instance() {
    return reinterpret_cast<const InvoiceDetails*>(
               &_InvoiceDetails_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(InvoiceDetails& a, InvoiceDetails& b) {
    a.Swap(&b);
  }
  inline void Swap(InvoiceDetails* other) {
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
  void UnsafeArenaSwap(InvoiceDetails* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  InvoiceDetails* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<InvoiceDetails>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const InvoiceDetails& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const InvoiceDetails& from) {
    InvoiceDetails::MergeImpl(*this, from);
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
  void InternalSwap(InvoiceDetails* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "gRCPTest.Protos.Models.InvoiceDetails";
  }
  protected:
  explicit InvoiceDetails(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kProductFieldNumber = 1,
    kDiscountFieldNumber = 2,
    kTotalFieldNumber = 4,
    kAmountFieldNumber = 3,
  };
  // .gRCPTest.Protos.Models.Product product = 1;
  bool has_product() const;
  private:
  bool _internal_has_product() const;
  public:
  void clear_product();
  const ::gRCPTest::Protos::Models::Product& product() const;
  PROTOBUF_NODISCARD ::gRCPTest::Protos::Models::Product* release_product();
  ::gRCPTest::Protos::Models::Product* mutable_product();
  void set_allocated_product(::gRCPTest::Protos::Models::Product* product);
  private:
  const ::gRCPTest::Protos::Models::Product& _internal_product() const;
  ::gRCPTest::Protos::Models::Product* _internal_mutable_product();
  public:
  void unsafe_arena_set_allocated_product(
      ::gRCPTest::Protos::Models::Product* product);
  ::gRCPTest::Protos::Models::Product* unsafe_arena_release_product();

  // double discount = 2;
  void clear_discount();
  double discount() const;
  void set_discount(double value);
  private:
  double _internal_discount() const;
  void _internal_set_discount(double value);
  public:

  // double total = 4;
  void clear_total();
  double total() const;
  void set_total(double value);
  private:
  double _internal_total() const;
  void _internal_set_total(double value);
  public:

  // int32 amount = 3;
  void clear_amount();
  int32_t amount() const;
  void set_amount(int32_t value);
  private:
  int32_t _internal_amount() const;
  void _internal_set_amount(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:gRCPTest.Protos.Models.InvoiceDetails)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::gRCPTest::Protos::Models::Product* product_;
    double discount_;
    double total_;
    int32_t amount_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_InvoiceDetails_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// InvoiceDetails

// .gRCPTest.Protos.Models.Product product = 1;
inline bool InvoiceDetails::_internal_has_product() const {
  return this != internal_default_instance() && _impl_.product_ != nullptr;
}
inline bool InvoiceDetails::has_product() const {
  return _internal_has_product();
}
inline const ::gRCPTest::Protos::Models::Product& InvoiceDetails::_internal_product() const {
  const ::gRCPTest::Protos::Models::Product* p = _impl_.product_;
  return p != nullptr ? *p : reinterpret_cast<const ::gRCPTest::Protos::Models::Product&>(
      ::gRCPTest::Protos::Models::_Product_default_instance_);
}
inline const ::gRCPTest::Protos::Models::Product& InvoiceDetails::product() const {
  // @@protoc_insertion_point(field_get:gRCPTest.Protos.Models.InvoiceDetails.product)
  return _internal_product();
}
inline void InvoiceDetails::unsafe_arena_set_allocated_product(
    ::gRCPTest::Protos::Models::Product* product) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.product_);
  }
  _impl_.product_ = product;
  if (product) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:gRCPTest.Protos.Models.InvoiceDetails.product)
}
inline ::gRCPTest::Protos::Models::Product* InvoiceDetails::release_product() {
  
  ::gRCPTest::Protos::Models::Product* temp = _impl_.product_;
  _impl_.product_ = nullptr;
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
inline ::gRCPTest::Protos::Models::Product* InvoiceDetails::unsafe_arena_release_product() {
  // @@protoc_insertion_point(field_release:gRCPTest.Protos.Models.InvoiceDetails.product)
  
  ::gRCPTest::Protos::Models::Product* temp = _impl_.product_;
  _impl_.product_ = nullptr;
  return temp;
}
inline ::gRCPTest::Protos::Models::Product* InvoiceDetails::_internal_mutable_product() {
  
  if (_impl_.product_ == nullptr) {
    auto* p = CreateMaybeMessage<::gRCPTest::Protos::Models::Product>(GetArenaForAllocation());
    _impl_.product_ = p;
  }
  return _impl_.product_;
}
inline ::gRCPTest::Protos::Models::Product* InvoiceDetails::mutable_product() {
  ::gRCPTest::Protos::Models::Product* _msg = _internal_mutable_product();
  // @@protoc_insertion_point(field_mutable:gRCPTest.Protos.Models.InvoiceDetails.product)
  return _msg;
}
inline void InvoiceDetails::set_allocated_product(::gRCPTest::Protos::Models::Product* product) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.product_);
  }
  if (product) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(product));
    if (message_arena != submessage_arena) {
      product = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, product, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.product_ = product;
  // @@protoc_insertion_point(field_set_allocated:gRCPTest.Protos.Models.InvoiceDetails.product)
}

// double discount = 2;
inline void InvoiceDetails::clear_discount() {
  _impl_.discount_ = 0;
}
inline double InvoiceDetails::_internal_discount() const {
  return _impl_.discount_;
}
inline double InvoiceDetails::discount() const {
  // @@protoc_insertion_point(field_get:gRCPTest.Protos.Models.InvoiceDetails.discount)
  return _internal_discount();
}
inline void InvoiceDetails::_internal_set_discount(double value) {
  
  _impl_.discount_ = value;
}
inline void InvoiceDetails::set_discount(double value) {
  _internal_set_discount(value);
  // @@protoc_insertion_point(field_set:gRCPTest.Protos.Models.InvoiceDetails.discount)
}

// int32 amount = 3;
inline void InvoiceDetails::clear_amount() {
  _impl_.amount_ = 0;
}
inline int32_t InvoiceDetails::_internal_amount() const {
  return _impl_.amount_;
}
inline int32_t InvoiceDetails::amount() const {
  // @@protoc_insertion_point(field_get:gRCPTest.Protos.Models.InvoiceDetails.amount)
  return _internal_amount();
}
inline void InvoiceDetails::_internal_set_amount(int32_t value) {
  
  _impl_.amount_ = value;
}
inline void InvoiceDetails::set_amount(int32_t value) {
  _internal_set_amount(value);
  // @@protoc_insertion_point(field_set:gRCPTest.Protos.Models.InvoiceDetails.amount)
}

// double total = 4;
inline void InvoiceDetails::clear_total() {
  _impl_.total_ = 0;
}
inline double InvoiceDetails::_internal_total() const {
  return _impl_.total_;
}
inline double InvoiceDetails::total() const {
  // @@protoc_insertion_point(field_get:gRCPTest.Protos.Models.InvoiceDetails.total)
  return _internal_total();
}
inline void InvoiceDetails::_internal_set_total(double value) {
  
  _impl_.total_ = value;
}
inline void InvoiceDetails::set_total(double value) {
  _internal_set_total(value);
  // @@protoc_insertion_point(field_set:gRCPTest.Protos.Models.InvoiceDetails.total)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace Models
}  // namespace Protos
}  // namespace gRCPTest

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_InvoiceDetails_2eproto