// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ServerBase.proto

#ifndef PROTOBUF_ServerBase_2eproto__INCLUDED
#define PROTOBUF_ServerBase_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3003002 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
class Registration_Req;
class Registration_ReqDefaultTypeInternal;
extern Registration_ReqDefaultTypeInternal _Registration_Req_default_instance_;
class Registration_Res;
class Registration_ResDefaultTypeInternal;
extern Registration_ResDefaultTypeInternal _Registration_Res_default_instance_;

namespace protobuf_ServerBase_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_ServerBase_2eproto

// ===================================================================

class Registration_Req : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Registration_Req) */ {
 public:
  Registration_Req();
  virtual ~Registration_Req();

  Registration_Req(const Registration_Req& from);

  inline Registration_Req& operator=(const Registration_Req& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Registration_Req& default_instance();

  static inline const Registration_Req* internal_default_instance() {
    return reinterpret_cast<const Registration_Req*>(
               &_Registration_Req_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(Registration_Req* other);

  // implements Message ----------------------------------------------

  inline Registration_Req* New() const PROTOBUF_FINAL { return New(NULL); }

  Registration_Req* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Registration_Req& from);
  void MergeFrom(const Registration_Req& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(Registration_Req* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // int64 registration_time = 1;
  void clear_registration_time();
  static const int kRegistrationTimeFieldNumber = 1;
  ::google::protobuf::int64 registration_time() const;
  void set_registration_time(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:Registration_Req)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int64 registration_time_;
  mutable int _cached_size_;
  friend struct protobuf_ServerBase_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Registration_Res : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Registration_Res) */ {
 public:
  Registration_Res();
  virtual ~Registration_Res();

  Registration_Res(const Registration_Res& from);

  inline Registration_Res& operator=(const Registration_Res& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Registration_Res& default_instance();

  static inline const Registration_Res* internal_default_instance() {
    return reinterpret_cast<const Registration_Res*>(
               &_Registration_Res_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(Registration_Res* other);

  // implements Message ----------------------------------------------

  inline Registration_Res* New() const PROTOBUF_FINAL { return New(NULL); }

  Registration_Res* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Registration_Res& from);
  void MergeFrom(const Registration_Res& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(Registration_Res* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // int64 server_tiem = 1;
  void clear_server_tiem();
  static const int kServerTiemFieldNumber = 1;
  ::google::protobuf::int64 server_tiem() const;
  void set_server_tiem(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:Registration_Res)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int64 server_tiem_;
  mutable int _cached_size_;
  friend struct protobuf_ServerBase_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Registration_Req

// int64 registration_time = 1;
inline void Registration_Req::clear_registration_time() {
  registration_time_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 Registration_Req::registration_time() const {
  // @@protoc_insertion_point(field_get:Registration_Req.registration_time)
  return registration_time_;
}
inline void Registration_Req::set_registration_time(::google::protobuf::int64 value) {
  
  registration_time_ = value;
  // @@protoc_insertion_point(field_set:Registration_Req.registration_time)
}

// -------------------------------------------------------------------

// Registration_Res

// int64 server_tiem = 1;
inline void Registration_Res::clear_server_tiem() {
  server_tiem_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 Registration_Res::server_tiem() const {
  // @@protoc_insertion_point(field_get:Registration_Res.server_tiem)
  return server_tiem_;
}
inline void Registration_Res::set_server_tiem(::google::protobuf::int64 value) {
  
  server_tiem_ = value;
  // @@protoc_insertion_point(field_set:Registration_Res.server_tiem)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_ServerBase_2eproto__INCLUDED