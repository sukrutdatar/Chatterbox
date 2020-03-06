// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: LogoutCommandMessageProtoBuf.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_LogoutCommandMessageProtoBuf_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_LogoutCommandMessageProtoBuf_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3011000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3011004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_LogoutCommandMessageProtoBuf_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_LogoutCommandMessageProtoBuf_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_LogoutCommandMessageProtoBuf_2eproto;
namespace ChatterBoxCore {
namespace Protocols {
class LogoutCommandMessageProtoBuf;
class LogoutCommandMessageProtoBufDefaultTypeInternal;
extern LogoutCommandMessageProtoBufDefaultTypeInternal _LogoutCommandMessageProtoBuf_default_instance_;
}  // namespace Protocols
}  // namespace ChatterBoxCore
PROTOBUF_NAMESPACE_OPEN
template<> ::ChatterBoxCore::Protocols::LogoutCommandMessageProtoBuf* Arena::CreateMaybeMessage<::ChatterBoxCore::Protocols::LogoutCommandMessageProtoBuf>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace ChatterBoxCore {
namespace Protocols {

// ===================================================================

class LogoutCommandMessageProtoBuf :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ChatterBoxCore.Protocols.LogoutCommandMessageProtoBuf) */ {
 public:
  LogoutCommandMessageProtoBuf();
  virtual ~LogoutCommandMessageProtoBuf();

  LogoutCommandMessageProtoBuf(const LogoutCommandMessageProtoBuf& from);
  LogoutCommandMessageProtoBuf(LogoutCommandMessageProtoBuf&& from) noexcept
    : LogoutCommandMessageProtoBuf() {
    *this = ::std::move(from);
  }

  inline LogoutCommandMessageProtoBuf& operator=(const LogoutCommandMessageProtoBuf& from) {
    CopyFrom(from);
    return *this;
  }
  inline LogoutCommandMessageProtoBuf& operator=(LogoutCommandMessageProtoBuf&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const LogoutCommandMessageProtoBuf& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const LogoutCommandMessageProtoBuf* internal_default_instance() {
    return reinterpret_cast<const LogoutCommandMessageProtoBuf*>(
               &_LogoutCommandMessageProtoBuf_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(LogoutCommandMessageProtoBuf& a, LogoutCommandMessageProtoBuf& b) {
    a.Swap(&b);
  }
  inline void Swap(LogoutCommandMessageProtoBuf* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline LogoutCommandMessageProtoBuf* New() const final {
    return CreateMaybeMessage<LogoutCommandMessageProtoBuf>(nullptr);
  }

  LogoutCommandMessageProtoBuf* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<LogoutCommandMessageProtoBuf>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const LogoutCommandMessageProtoBuf& from);
  void MergeFrom(const LogoutCommandMessageProtoBuf& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(LogoutCommandMessageProtoBuf* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ChatterBoxCore.Protocols.LogoutCommandMessageProtoBuf";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_LogoutCommandMessageProtoBuf_2eproto);
    return ::descriptor_table_LogoutCommandMessageProtoBuf_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:ChatterBoxCore.Protocols.LogoutCommandMessageProtoBuf)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_LogoutCommandMessageProtoBuf_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// LogoutCommandMessageProtoBuf

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace Protocols
}  // namespace ChatterBoxCore

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_LogoutCommandMessageProtoBuf_2eproto
