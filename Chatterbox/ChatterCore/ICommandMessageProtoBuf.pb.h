// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ICommandMessageProtoBuf.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ICommandMessageProtoBuf_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ICommandMessageProtoBuf_2eproto

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_ICommandMessageProtoBuf_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_ICommandMessageProtoBuf_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ICommandMessageProtoBuf_2eproto;
namespace ChatterCore {
namespace Protocols {
class ICommandMessageProtoBuf;
class ICommandMessageProtoBufDefaultTypeInternal;
extern ICommandMessageProtoBufDefaultTypeInternal _ICommandMessageProtoBuf_default_instance_;
}  // namespace Protocols
}  // namespace ChatterCore
PROTOBUF_NAMESPACE_OPEN
template<> ::ChatterCore::Protocols::ICommandMessageProtoBuf* Arena::CreateMaybeMessage<::ChatterCore::Protocols::ICommandMessageProtoBuf>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace ChatterCore {
namespace Protocols {

enum ICommandMessageProtoBuf_CommandTypeProtoBuf : int {
  ICommandMessageProtoBuf_CommandTypeProtoBuf_LoginCommand = 0,
  ICommandMessageProtoBuf_CommandTypeProtoBuf_LogoutCommand = 1,
  ICommandMessageProtoBuf_CommandTypeProtoBuf_ListUsersCommand = 2,
  ICommandMessageProtoBuf_CommandTypeProtoBuf_RegisterCommand = 3,
  ICommandMessageProtoBuf_CommandTypeProtoBuf_ChatCommand = 4,
  ICommandMessageProtoBuf_CommandTypeProtoBuf_ICommandMessageProtoBuf_CommandTypeProtoBuf_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  ICommandMessageProtoBuf_CommandTypeProtoBuf_ICommandMessageProtoBuf_CommandTypeProtoBuf_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool ICommandMessageProtoBuf_CommandTypeProtoBuf_IsValid(int value);
constexpr ICommandMessageProtoBuf_CommandTypeProtoBuf ICommandMessageProtoBuf_CommandTypeProtoBuf_CommandTypeProtoBuf_MIN = ICommandMessageProtoBuf_CommandTypeProtoBuf_LoginCommand;
constexpr ICommandMessageProtoBuf_CommandTypeProtoBuf ICommandMessageProtoBuf_CommandTypeProtoBuf_CommandTypeProtoBuf_MAX = ICommandMessageProtoBuf_CommandTypeProtoBuf_ChatCommand;
constexpr int ICommandMessageProtoBuf_CommandTypeProtoBuf_CommandTypeProtoBuf_ARRAYSIZE = ICommandMessageProtoBuf_CommandTypeProtoBuf_CommandTypeProtoBuf_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ICommandMessageProtoBuf_CommandTypeProtoBuf_descriptor();
template<typename T>
inline const std::string& ICommandMessageProtoBuf_CommandTypeProtoBuf_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ICommandMessageProtoBuf_CommandTypeProtoBuf>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ICommandMessageProtoBuf_CommandTypeProtoBuf_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    ICommandMessageProtoBuf_CommandTypeProtoBuf_descriptor(), enum_t_value);
}
inline bool ICommandMessageProtoBuf_CommandTypeProtoBuf_Parse(
    const std::string& name, ICommandMessageProtoBuf_CommandTypeProtoBuf* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<ICommandMessageProtoBuf_CommandTypeProtoBuf>(
    ICommandMessageProtoBuf_CommandTypeProtoBuf_descriptor(), name, value);
}
// ===================================================================

class ICommandMessageProtoBuf :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ChatterCore.Protocols.ICommandMessageProtoBuf) */ {
 public:
  ICommandMessageProtoBuf();
  virtual ~ICommandMessageProtoBuf();

  ICommandMessageProtoBuf(const ICommandMessageProtoBuf& from);
  ICommandMessageProtoBuf(ICommandMessageProtoBuf&& from) noexcept
    : ICommandMessageProtoBuf() {
    *this = ::std::move(from);
  }

  inline ICommandMessageProtoBuf& operator=(const ICommandMessageProtoBuf& from) {
    CopyFrom(from);
    return *this;
  }
  inline ICommandMessageProtoBuf& operator=(ICommandMessageProtoBuf&& from) noexcept {
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
  static const ICommandMessageProtoBuf& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ICommandMessageProtoBuf* internal_default_instance() {
    return reinterpret_cast<const ICommandMessageProtoBuf*>(
               &_ICommandMessageProtoBuf_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ICommandMessageProtoBuf& a, ICommandMessageProtoBuf& b) {
    a.Swap(&b);
  }
  inline void Swap(ICommandMessageProtoBuf* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ICommandMessageProtoBuf* New() const final {
    return CreateMaybeMessage<ICommandMessageProtoBuf>(nullptr);
  }

  ICommandMessageProtoBuf* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ICommandMessageProtoBuf>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ICommandMessageProtoBuf& from);
  void MergeFrom(const ICommandMessageProtoBuf& from);
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
  void InternalSwap(ICommandMessageProtoBuf* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ChatterCore.Protocols.ICommandMessageProtoBuf";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_ICommandMessageProtoBuf_2eproto);
    return ::descriptor_table_ICommandMessageProtoBuf_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef ICommandMessageProtoBuf_CommandTypeProtoBuf CommandTypeProtoBuf;
  static constexpr CommandTypeProtoBuf LoginCommand =
    ICommandMessageProtoBuf_CommandTypeProtoBuf_LoginCommand;
  static constexpr CommandTypeProtoBuf LogoutCommand =
    ICommandMessageProtoBuf_CommandTypeProtoBuf_LogoutCommand;
  static constexpr CommandTypeProtoBuf ListUsersCommand =
    ICommandMessageProtoBuf_CommandTypeProtoBuf_ListUsersCommand;
  static constexpr CommandTypeProtoBuf RegisterCommand =
    ICommandMessageProtoBuf_CommandTypeProtoBuf_RegisterCommand;
  static constexpr CommandTypeProtoBuf ChatCommand =
    ICommandMessageProtoBuf_CommandTypeProtoBuf_ChatCommand;
  static inline bool CommandTypeProtoBuf_IsValid(int value) {
    return ICommandMessageProtoBuf_CommandTypeProtoBuf_IsValid(value);
  }
  static constexpr CommandTypeProtoBuf CommandTypeProtoBuf_MIN =
    ICommandMessageProtoBuf_CommandTypeProtoBuf_CommandTypeProtoBuf_MIN;
  static constexpr CommandTypeProtoBuf CommandTypeProtoBuf_MAX =
    ICommandMessageProtoBuf_CommandTypeProtoBuf_CommandTypeProtoBuf_MAX;
  static constexpr int CommandTypeProtoBuf_ARRAYSIZE =
    ICommandMessageProtoBuf_CommandTypeProtoBuf_CommandTypeProtoBuf_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  CommandTypeProtoBuf_descriptor() {
    return ICommandMessageProtoBuf_CommandTypeProtoBuf_descriptor();
  }
  template<typename T>
  static inline const std::string& CommandTypeProtoBuf_Name(T enum_t_value) {
    static_assert(::std::is_same<T, CommandTypeProtoBuf>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function CommandTypeProtoBuf_Name.");
    return ICommandMessageProtoBuf_CommandTypeProtoBuf_Name(enum_t_value);
  }
  static inline bool CommandTypeProtoBuf_Parse(const std::string& name,
      CommandTypeProtoBuf* value) {
    return ICommandMessageProtoBuf_CommandTypeProtoBuf_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kCommandTypeFieldNumber = 3,
  };
  // .ChatterCore.Protocols.ICommandMessageProtoBuf.CommandTypeProtoBuf commandType = 3;
  void clear_commandtype();
  ::ChatterCore::Protocols::ICommandMessageProtoBuf_CommandTypeProtoBuf commandtype() const;
  void set_commandtype(::ChatterCore::Protocols::ICommandMessageProtoBuf_CommandTypeProtoBuf value);
  private:
  ::ChatterCore::Protocols::ICommandMessageProtoBuf_CommandTypeProtoBuf _internal_commandtype() const;
  void _internal_set_commandtype(::ChatterCore::Protocols::ICommandMessageProtoBuf_CommandTypeProtoBuf value);
  public:

  // @@protoc_insertion_point(class_scope:ChatterCore.Protocols.ICommandMessageProtoBuf)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  int commandtype_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_ICommandMessageProtoBuf_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ICommandMessageProtoBuf

// .ChatterCore.Protocols.ICommandMessageProtoBuf.CommandTypeProtoBuf commandType = 3;
inline void ICommandMessageProtoBuf::clear_commandtype() {
  commandtype_ = 0;
}
inline ::ChatterCore::Protocols::ICommandMessageProtoBuf_CommandTypeProtoBuf ICommandMessageProtoBuf::_internal_commandtype() const {
  return static_cast< ::ChatterCore::Protocols::ICommandMessageProtoBuf_CommandTypeProtoBuf >(commandtype_);
}
inline ::ChatterCore::Protocols::ICommandMessageProtoBuf_CommandTypeProtoBuf ICommandMessageProtoBuf::commandtype() const {
  // @@protoc_insertion_point(field_get:ChatterCore.Protocols.ICommandMessageProtoBuf.commandType)
  return _internal_commandtype();
}
inline void ICommandMessageProtoBuf::_internal_set_commandtype(::ChatterCore::Protocols::ICommandMessageProtoBuf_CommandTypeProtoBuf value) {
  
  commandtype_ = value;
}
inline void ICommandMessageProtoBuf::set_commandtype(::ChatterCore::Protocols::ICommandMessageProtoBuf_CommandTypeProtoBuf value) {
  _internal_set_commandtype(value);
  // @@protoc_insertion_point(field_set:ChatterCore.Protocols.ICommandMessageProtoBuf.commandType)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace Protocols
}  // namespace ChatterCore

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::ChatterCore::Protocols::ICommandMessageProtoBuf_CommandTypeProtoBuf> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::ChatterCore::Protocols::ICommandMessageProtoBuf_CommandTypeProtoBuf>() {
  return ::ChatterCore::Protocols::ICommandMessageProtoBuf_CommandTypeProtoBuf_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ICommandMessageProtoBuf_2eproto
