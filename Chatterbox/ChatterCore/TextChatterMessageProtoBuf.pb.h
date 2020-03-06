// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: TextChatterMessageProtoBuf.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_TextChatterMessageProtoBuf_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_TextChatterMessageProtoBuf_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_TextChatterMessageProtoBuf_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_TextChatterMessageProtoBuf_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_TextChatterMessageProtoBuf_2eproto;
namespace ChatterBoxCore {
namespace Protocols {
class TextChatterMessageProtoBuf;
class TextChatterMessageProtoBufDefaultTypeInternal;
extern TextChatterMessageProtoBufDefaultTypeInternal _TextChatterMessageProtoBuf_default_instance_;
}  // namespace Protocols
}  // namespace ChatterBoxCore
PROTOBUF_NAMESPACE_OPEN
template<> ::ChatterBoxCore::Protocols::TextChatterMessageProtoBuf* Arena::CreateMaybeMessage<::ChatterBoxCore::Protocols::TextChatterMessageProtoBuf>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace ChatterBoxCore {
namespace Protocols {

// ===================================================================

class TextChatterMessageProtoBuf :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ChatterBoxCore.Protocols.TextChatterMessageProtoBuf) */ {
 public:
  TextChatterMessageProtoBuf();
  virtual ~TextChatterMessageProtoBuf();

  TextChatterMessageProtoBuf(const TextChatterMessageProtoBuf& from);
  TextChatterMessageProtoBuf(TextChatterMessageProtoBuf&& from) noexcept
    : TextChatterMessageProtoBuf() {
    *this = ::std::move(from);
  }

  inline TextChatterMessageProtoBuf& operator=(const TextChatterMessageProtoBuf& from) {
    CopyFrom(from);
    return *this;
  }
  inline TextChatterMessageProtoBuf& operator=(TextChatterMessageProtoBuf&& from) noexcept {
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
  static const TextChatterMessageProtoBuf& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TextChatterMessageProtoBuf* internal_default_instance() {
    return reinterpret_cast<const TextChatterMessageProtoBuf*>(
               &_TextChatterMessageProtoBuf_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(TextChatterMessageProtoBuf& a, TextChatterMessageProtoBuf& b) {
    a.Swap(&b);
  }
  inline void Swap(TextChatterMessageProtoBuf* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline TextChatterMessageProtoBuf* New() const final {
    return CreateMaybeMessage<TextChatterMessageProtoBuf>(nullptr);
  }

  TextChatterMessageProtoBuf* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<TextChatterMessageProtoBuf>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const TextChatterMessageProtoBuf& from);
  void MergeFrom(const TextChatterMessageProtoBuf& from);
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
  void InternalSwap(TextChatterMessageProtoBuf* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ChatterBoxCore.Protocols.TextChatterMessageProtoBuf";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_TextChatterMessageProtoBuf_2eproto);
    return ::descriptor_table_TextChatterMessageProtoBuf_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTextMessageFieldNumber = 4,
    kChatWithUserFieldNumber = 5,
  };
  // string textMessage = 4;
  void clear_textmessage();
  const std::string& textmessage() const;
  void set_textmessage(const std::string& value);
  void set_textmessage(std::string&& value);
  void set_textmessage(const char* value);
  void set_textmessage(const char* value, size_t size);
  std::string* mutable_textmessage();
  std::string* release_textmessage();
  void set_allocated_textmessage(std::string* textmessage);
  private:
  const std::string& _internal_textmessage() const;
  void _internal_set_textmessage(const std::string& value);
  std::string* _internal_mutable_textmessage();
  public:

  // string chatWithUser = 5;
  void clear_chatwithuser();
  const std::string& chatwithuser() const;
  void set_chatwithuser(const std::string& value);
  void set_chatwithuser(std::string&& value);
  void set_chatwithuser(const char* value);
  void set_chatwithuser(const char* value, size_t size);
  std::string* mutable_chatwithuser();
  std::string* release_chatwithuser();
  void set_allocated_chatwithuser(std::string* chatwithuser);
  private:
  const std::string& _internal_chatwithuser() const;
  void _internal_set_chatwithuser(const std::string& value);
  std::string* _internal_mutable_chatwithuser();
  public:

  // @@protoc_insertion_point(class_scope:ChatterBoxCore.Protocols.TextChatterMessageProtoBuf)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr textmessage_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr chatwithuser_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_TextChatterMessageProtoBuf_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TextChatterMessageProtoBuf

// string textMessage = 4;
inline void TextChatterMessageProtoBuf::clear_textmessage() {
  textmessage_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& TextChatterMessageProtoBuf::textmessage() const {
  // @@protoc_insertion_point(field_get:ChatterBoxCore.Protocols.TextChatterMessageProtoBuf.textMessage)
  return _internal_textmessage();
}
inline void TextChatterMessageProtoBuf::set_textmessage(const std::string& value) {
  _internal_set_textmessage(value);
  // @@protoc_insertion_point(field_set:ChatterBoxCore.Protocols.TextChatterMessageProtoBuf.textMessage)
}
inline std::string* TextChatterMessageProtoBuf::mutable_textmessage() {
  // @@protoc_insertion_point(field_mutable:ChatterBoxCore.Protocols.TextChatterMessageProtoBuf.textMessage)
  return _internal_mutable_textmessage();
}
inline const std::string& TextChatterMessageProtoBuf::_internal_textmessage() const {
  return textmessage_.GetNoArena();
}
inline void TextChatterMessageProtoBuf::_internal_set_textmessage(const std::string& value) {
  
  textmessage_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void TextChatterMessageProtoBuf::set_textmessage(std::string&& value) {
  
  textmessage_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ChatterBoxCore.Protocols.TextChatterMessageProtoBuf.textMessage)
}
inline void TextChatterMessageProtoBuf::set_textmessage(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  textmessage_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ChatterBoxCore.Protocols.TextChatterMessageProtoBuf.textMessage)
}
inline void TextChatterMessageProtoBuf::set_textmessage(const char* value, size_t size) {
  
  textmessage_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ChatterBoxCore.Protocols.TextChatterMessageProtoBuf.textMessage)
}
inline std::string* TextChatterMessageProtoBuf::_internal_mutable_textmessage() {
  
  return textmessage_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* TextChatterMessageProtoBuf::release_textmessage() {
  // @@protoc_insertion_point(field_release:ChatterBoxCore.Protocols.TextChatterMessageProtoBuf.textMessage)
  
  return textmessage_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void TextChatterMessageProtoBuf::set_allocated_textmessage(std::string* textmessage) {
  if (textmessage != nullptr) {
    
  } else {
    
  }
  textmessage_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), textmessage);
  // @@protoc_insertion_point(field_set_allocated:ChatterBoxCore.Protocols.TextChatterMessageProtoBuf.textMessage)
}

// string chatWithUser = 5;
inline void TextChatterMessageProtoBuf::clear_chatwithuser() {
  chatwithuser_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& TextChatterMessageProtoBuf::chatwithuser() const {
  // @@protoc_insertion_point(field_get:ChatterBoxCore.Protocols.TextChatterMessageProtoBuf.chatWithUser)
  return _internal_chatwithuser();
}
inline void TextChatterMessageProtoBuf::set_chatwithuser(const std::string& value) {
  _internal_set_chatwithuser(value);
  // @@protoc_insertion_point(field_set:ChatterBoxCore.Protocols.TextChatterMessageProtoBuf.chatWithUser)
}
inline std::string* TextChatterMessageProtoBuf::mutable_chatwithuser() {
  // @@protoc_insertion_point(field_mutable:ChatterBoxCore.Protocols.TextChatterMessageProtoBuf.chatWithUser)
  return _internal_mutable_chatwithuser();
}
inline const std::string& TextChatterMessageProtoBuf::_internal_chatwithuser() const {
  return chatwithuser_.GetNoArena();
}
inline void TextChatterMessageProtoBuf::_internal_set_chatwithuser(const std::string& value) {
  
  chatwithuser_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void TextChatterMessageProtoBuf::set_chatwithuser(std::string&& value) {
  
  chatwithuser_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ChatterBoxCore.Protocols.TextChatterMessageProtoBuf.chatWithUser)
}
inline void TextChatterMessageProtoBuf::set_chatwithuser(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  chatwithuser_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ChatterBoxCore.Protocols.TextChatterMessageProtoBuf.chatWithUser)
}
inline void TextChatterMessageProtoBuf::set_chatwithuser(const char* value, size_t size) {
  
  chatwithuser_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ChatterBoxCore.Protocols.TextChatterMessageProtoBuf.chatWithUser)
}
inline std::string* TextChatterMessageProtoBuf::_internal_mutable_chatwithuser() {
  
  return chatwithuser_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* TextChatterMessageProtoBuf::release_chatwithuser() {
  // @@protoc_insertion_point(field_release:ChatterBoxCore.Protocols.TextChatterMessageProtoBuf.chatWithUser)
  
  return chatwithuser_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void TextChatterMessageProtoBuf::set_allocated_chatwithuser(std::string* chatwithuser) {
  if (chatwithuser != nullptr) {
    
  } else {
    
  }
  chatwithuser_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), chatwithuser);
  // @@protoc_insertion_point(field_set_allocated:ChatterBoxCore.Protocols.TextChatterMessageProtoBuf.chatWithUser)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace Protocols
}  // namespace ChatterBoxCore

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_TextChatterMessageProtoBuf_2eproto
