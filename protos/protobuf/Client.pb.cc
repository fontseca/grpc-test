// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Client.proto

#include "Client.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace gRCPTest {
namespace Protos {
namespace Models {
PROTOBUF_CONSTEXPR Client::Client(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.name_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.phone_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.email_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.id_)*/int64_t{0}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct ClientDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ClientDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ClientDefaultTypeInternal() {}
  union {
    Client _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ClientDefaultTypeInternal _Client_default_instance_;
}  // namespace Models
}  // namespace Protos
}  // namespace gRCPTest
static ::_pb::Metadata file_level_metadata_Client_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_Client_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_Client_2eproto = nullptr;

const uint32_t TableStruct_Client_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::gRCPTest::Protos::Models::Client, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::gRCPTest::Protos::Models::Client, _impl_.id_),
  PROTOBUF_FIELD_OFFSET(::gRCPTest::Protos::Models::Client, _impl_.name_),
  PROTOBUF_FIELD_OFFSET(::gRCPTest::Protos::Models::Client, _impl_.phone_),
  PROTOBUF_FIELD_OFFSET(::gRCPTest::Protos::Models::Client, _impl_.email_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::gRCPTest::Protos::Models::Client)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::gRCPTest::Protos::Models::_Client_default_instance_._instance,
};

const char descriptor_table_protodef_Client_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\014Client.proto\022\026gRCPTest.Protos.Models\"@"
  "\n\006Client\022\n\n\002id\030\001 \001(\003\022\014\n\004name\030\002 \001(\t\022\r\n\005ph"
  "one\030\003 \001(\t\022\r\n\005email\030\004 \001(\tb\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_Client_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_Client_2eproto = {
    false, false, 112, descriptor_table_protodef_Client_2eproto,
    "Client.proto",
    &descriptor_table_Client_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_Client_2eproto::offsets,
    file_level_metadata_Client_2eproto, file_level_enum_descriptors_Client_2eproto,
    file_level_service_descriptors_Client_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_Client_2eproto_getter() {
  return &descriptor_table_Client_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_Client_2eproto(&descriptor_table_Client_2eproto);
namespace gRCPTest {
namespace Protos {
namespace Models {

// ===================================================================

class Client::_Internal {
 public:
};

Client::Client(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:gRCPTest.Protos.Models.Client)
}
Client::Client(const Client& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Client* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.name_){}
    , decltype(_impl_.phone_){}
    , decltype(_impl_.email_){}
    , decltype(_impl_.id_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_name().empty()) {
    _this->_impl_.name_.Set(from._internal_name(), 
      _this->GetArenaForAllocation());
  }
  _impl_.phone_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.phone_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_phone().empty()) {
    _this->_impl_.phone_.Set(from._internal_phone(), 
      _this->GetArenaForAllocation());
  }
  _impl_.email_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.email_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_email().empty()) {
    _this->_impl_.email_.Set(from._internal_email(), 
      _this->GetArenaForAllocation());
  }
  _this->_impl_.id_ = from._impl_.id_;
  // @@protoc_insertion_point(copy_constructor:gRCPTest.Protos.Models.Client)
}

inline void Client::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.name_){}
    , decltype(_impl_.phone_){}
    , decltype(_impl_.email_){}
    , decltype(_impl_.id_){int64_t{0}}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.phone_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.phone_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.email_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.email_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

Client::~Client() {
  // @@protoc_insertion_point(destructor:gRCPTest.Protos.Models.Client)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Client::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.name_.Destroy();
  _impl_.phone_.Destroy();
  _impl_.email_.Destroy();
}

void Client::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Client::Clear() {
// @@protoc_insertion_point(message_clear_start:gRCPTest.Protos.Models.Client)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.name_.ClearToEmpty();
  _impl_.phone_.ClearToEmpty();
  _impl_.email_.ClearToEmpty();
  _impl_.id_ = int64_t{0};
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Client::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int64 id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string name = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "gRCPTest.Protos.Models.Client.name"));
        } else
          goto handle_unusual;
        continue;
      // string phone = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_phone();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "gRCPTest.Protos.Models.Client.phone"));
        } else
          goto handle_unusual;
        continue;
      // string email = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          auto str = _internal_mutable_email();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "gRCPTest.Protos.Models.Client.email"));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Client::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:gRCPTest.Protos.Models.Client)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 id = 1;
  if (this->_internal_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(1, this->_internal_id(), target);
  }

  // string name = 2;
  if (!this->_internal_name().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "gRCPTest.Protos.Models.Client.name");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_name(), target);
  }

  // string phone = 3;
  if (!this->_internal_phone().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_phone().data(), static_cast<int>(this->_internal_phone().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "gRCPTest.Protos.Models.Client.phone");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_phone(), target);
  }

  // string email = 4;
  if (!this->_internal_email().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_email().data(), static_cast<int>(this->_internal_email().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "gRCPTest.Protos.Models.Client.email");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_email(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gRCPTest.Protos.Models.Client)
  return target;
}

size_t Client::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gRCPTest.Protos.Models.Client)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string name = 2;
  if (!this->_internal_name().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());
  }

  // string phone = 3;
  if (!this->_internal_phone().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_phone());
  }

  // string email = 4;
  if (!this->_internal_email().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_email());
  }

  // int64 id = 1;
  if (this->_internal_id() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_id());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Client::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Client::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Client::GetClassData() const { return &_class_data_; }


void Client::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Client*>(&to_msg);
  auto& from = static_cast<const Client&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:gRCPTest.Protos.Models.Client)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_name().empty()) {
    _this->_internal_set_name(from._internal_name());
  }
  if (!from._internal_phone().empty()) {
    _this->_internal_set_phone(from._internal_phone());
  }
  if (!from._internal_email().empty()) {
    _this->_internal_set_email(from._internal_email());
  }
  if (from._internal_id() != 0) {
    _this->_internal_set_id(from._internal_id());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Client::CopyFrom(const Client& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gRCPTest.Protos.Models.Client)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Client::IsInitialized() const {
  return true;
}

void Client::InternalSwap(Client* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.name_, lhs_arena,
      &other->_impl_.name_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.phone_, lhs_arena,
      &other->_impl_.phone_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.email_, lhs_arena,
      &other->_impl_.email_, rhs_arena
  );
  swap(_impl_.id_, other->_impl_.id_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Client::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_Client_2eproto_getter, &descriptor_table_Client_2eproto_once,
      file_level_metadata_Client_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Models
}  // namespace Protos
}  // namespace gRCPTest
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::gRCPTest::Protos::Models::Client*
Arena::CreateMaybeMessage< ::gRCPTest::Protos::Models::Client >(Arena* arena) {
  return Arena::CreateMessageInternal< ::gRCPTest::Protos::Models::Client >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
