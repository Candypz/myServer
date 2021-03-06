// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ServerBase.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "ServerBase.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
class Registration_ReqDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<Registration_Req> {
} _Registration_Req_default_instance_;
class Registration_ResDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<Registration_Res> {
} _Registration_Res_default_instance_;

namespace protobuf_ServerBase_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[2];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] = {
  { NULL, NULL, 0, -1, -1, false },
  { NULL, NULL, 0, -1, -1, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Registration_Req, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Registration_Req, registration_time_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Registration_Res, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Registration_Res, server_tiem_),
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, -1, sizeof(Registration_Req)},
  { 6, -1, sizeof(Registration_Res)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_Registration_Req_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_Registration_Res_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "ServerBase.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

}  // namespace

void TableStruct::Shutdown() {
  _Registration_Req_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
  _Registration_Res_default_instance_.Shutdown();
  delete file_level_metadata[1].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _Registration_Req_default_instance_.DefaultConstruct();
  _Registration_Res_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
namespace {
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\020ServerBase.proto\"-\n\020Registration_Req\022\031"
      "\n\021registration_time\030\001 \001(\003\"\'\n\020Registratio"
      "n_Res\022\023\n\013server_tiem\030\001 \001(\003b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 114);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "ServerBase.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}
} // anonymous namespace

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_ServerBase_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Registration_Req::kRegistrationTimeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Registration_Req::Registration_Req()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_ServerBase_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:Registration_Req)
}
Registration_Req::Registration_Req(const Registration_Req& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  registration_time_ = from.registration_time_;
  // @@protoc_insertion_point(copy_constructor:Registration_Req)
}

void Registration_Req::SharedCtor() {
  registration_time_ = GOOGLE_LONGLONG(0);
  _cached_size_ = 0;
}

Registration_Req::~Registration_Req() {
  // @@protoc_insertion_point(destructor:Registration_Req)
  SharedDtor();
}

void Registration_Req::SharedDtor() {
}

void Registration_Req::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Registration_Req::descriptor() {
  protobuf_ServerBase_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_ServerBase_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Registration_Req& Registration_Req::default_instance() {
  protobuf_ServerBase_2eproto::InitDefaults();
  return *internal_default_instance();
}

Registration_Req* Registration_Req::New(::google::protobuf::Arena* arena) const {
  Registration_Req* n = new Registration_Req;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Registration_Req::Clear() {
// @@protoc_insertion_point(message_clear_start:Registration_Req)
  registration_time_ = GOOGLE_LONGLONG(0);
}

bool Registration_Req::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Registration_Req)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int64 registration_time = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &registration_time_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:Registration_Req)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Registration_Req)
  return false;
#undef DO_
}

void Registration_Req::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Registration_Req)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 registration_time = 1;
  if (this->registration_time() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->registration_time(), output);
  }

  // @@protoc_insertion_point(serialize_end:Registration_Req)
}

::google::protobuf::uint8* Registration_Req::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:Registration_Req)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 registration_time = 1;
  if (this->registration_time() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->registration_time(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:Registration_Req)
  return target;
}

size_t Registration_Req::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Registration_Req)
  size_t total_size = 0;

  // int64 registration_time = 1;
  if (this->registration_time() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->registration_time());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Registration_Req::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Registration_Req)
  GOOGLE_DCHECK_NE(&from, this);
  const Registration_Req* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Registration_Req>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Registration_Req)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Registration_Req)
    MergeFrom(*source);
  }
}

void Registration_Req::MergeFrom(const Registration_Req& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Registration_Req)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.registration_time() != 0) {
    set_registration_time(from.registration_time());
  }
}

void Registration_Req::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Registration_Req)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Registration_Req::CopyFrom(const Registration_Req& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Registration_Req)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Registration_Req::IsInitialized() const {
  return true;
}

void Registration_Req::Swap(Registration_Req* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Registration_Req::InternalSwap(Registration_Req* other) {
  std::swap(registration_time_, other->registration_time_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Registration_Req::GetMetadata() const {
  protobuf_ServerBase_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_ServerBase_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Registration_Req

// int64 registration_time = 1;
void Registration_Req::clear_registration_time() {
  registration_time_ = GOOGLE_LONGLONG(0);
}
::google::protobuf::int64 Registration_Req::registration_time() const {
  // @@protoc_insertion_point(field_get:Registration_Req.registration_time)
  return registration_time_;
}
void Registration_Req::set_registration_time(::google::protobuf::int64 value) {
  
  registration_time_ = value;
  // @@protoc_insertion_point(field_set:Registration_Req.registration_time)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Registration_Res::kServerTiemFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Registration_Res::Registration_Res()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_ServerBase_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:Registration_Res)
}
Registration_Res::Registration_Res(const Registration_Res& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  server_tiem_ = from.server_tiem_;
  // @@protoc_insertion_point(copy_constructor:Registration_Res)
}

void Registration_Res::SharedCtor() {
  server_tiem_ = GOOGLE_LONGLONG(0);
  _cached_size_ = 0;
}

Registration_Res::~Registration_Res() {
  // @@protoc_insertion_point(destructor:Registration_Res)
  SharedDtor();
}

void Registration_Res::SharedDtor() {
}

void Registration_Res::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Registration_Res::descriptor() {
  protobuf_ServerBase_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_ServerBase_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Registration_Res& Registration_Res::default_instance() {
  protobuf_ServerBase_2eproto::InitDefaults();
  return *internal_default_instance();
}

Registration_Res* Registration_Res::New(::google::protobuf::Arena* arena) const {
  Registration_Res* n = new Registration_Res;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Registration_Res::Clear() {
// @@protoc_insertion_point(message_clear_start:Registration_Res)
  server_tiem_ = GOOGLE_LONGLONG(0);
}

bool Registration_Res::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Registration_Res)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int64 server_tiem = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &server_tiem_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:Registration_Res)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Registration_Res)
  return false;
#undef DO_
}

void Registration_Res::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Registration_Res)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 server_tiem = 1;
  if (this->server_tiem() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->server_tiem(), output);
  }

  // @@protoc_insertion_point(serialize_end:Registration_Res)
}

::google::protobuf::uint8* Registration_Res::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:Registration_Res)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 server_tiem = 1;
  if (this->server_tiem() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->server_tiem(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:Registration_Res)
  return target;
}

size_t Registration_Res::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Registration_Res)
  size_t total_size = 0;

  // int64 server_tiem = 1;
  if (this->server_tiem() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->server_tiem());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Registration_Res::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Registration_Res)
  GOOGLE_DCHECK_NE(&from, this);
  const Registration_Res* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Registration_Res>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Registration_Res)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Registration_Res)
    MergeFrom(*source);
  }
}

void Registration_Res::MergeFrom(const Registration_Res& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Registration_Res)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.server_tiem() != 0) {
    set_server_tiem(from.server_tiem());
  }
}

void Registration_Res::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Registration_Res)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Registration_Res::CopyFrom(const Registration_Res& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Registration_Res)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Registration_Res::IsInitialized() const {
  return true;
}

void Registration_Res::Swap(Registration_Res* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Registration_Res::InternalSwap(Registration_Res* other) {
  std::swap(server_tiem_, other->server_tiem_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Registration_Res::GetMetadata() const {
  protobuf_ServerBase_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_ServerBase_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Registration_Res

// int64 server_tiem = 1;
void Registration_Res::clear_server_tiem() {
  server_tiem_ = GOOGLE_LONGLONG(0);
}
::google::protobuf::int64 Registration_Res::server_tiem() const {
  // @@protoc_insertion_point(field_get:Registration_Res.server_tiem)
  return server_tiem_;
}
void Registration_Res::set_server_tiem(::google::protobuf::int64 value) {
  
  server_tiem_ = value;
  // @@protoc_insertion_point(field_set:Registration_Res.server_tiem)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
