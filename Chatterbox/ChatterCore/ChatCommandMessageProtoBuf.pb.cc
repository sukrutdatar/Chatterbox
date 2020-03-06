// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ChatCommandMessageProtoBuf.proto

#include "ChatCommandMessageProtoBuf.pb.h"

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
namespace ChatterBoxCore {
namespace Protocols {
class ChatCommandMessageProtoBufDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ChatCommandMessageProtoBuf> _instance;
} _ChatCommandMessageProtoBuf_default_instance_;
}  // namespace Protocols
}  // namespace ChatterBoxCore
static void InitDefaultsscc_info_ChatCommandMessageProtoBuf_ChatCommandMessageProtoBuf_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::ChatterBoxCore::Protocols::_ChatCommandMessageProtoBuf_default_instance_;
    new (ptr) ::ChatterBoxCore::Protocols::ChatCommandMessageProtoBuf();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::ChatterBoxCore::Protocols::ChatCommandMessageProtoBuf::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_ChatCommandMessageProtoBuf_ChatCommandMessageProtoBuf_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_ChatCommandMessageProtoBuf_ChatCommandMessageProtoBuf_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_ChatCommandMessageProtoBuf_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_ChatCommandMessageProtoBuf_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_ChatCommandMessageProtoBuf_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_ChatCommandMessageProtoBuf_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::ChatterBoxCore::Protocols::ChatCommandMessageProtoBuf, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::ChatterBoxCore::Protocols::ChatCommandMessageProtoBuf, chatwithuser_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::ChatterBoxCore::Protocols::ChatCommandMessageProtoBuf)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::ChatterBoxCore::Protocols::_ChatCommandMessageProtoBuf_default_instance_),
};

const char descriptor_table_protodef_ChatCommandMessageProtoBuf_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n ChatCommandMessageProtoBuf.proto\022\030Chat"
  "terBoxCore.Protocols\"2\n\032ChatCommandMessa"
  "geProtoBuf\022\024\n\014chatWithUser\030\004 \001(\tb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_ChatCommandMessageProtoBuf_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_ChatCommandMessageProtoBuf_2eproto_sccs[1] = {
  &scc_info_ChatCommandMessageProtoBuf_ChatCommandMessageProtoBuf_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_ChatCommandMessageProtoBuf_2eproto_once;
static bool descriptor_table_ChatCommandMessageProtoBuf_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ChatCommandMessageProtoBuf_2eproto = {
  &descriptor_table_ChatCommandMessageProtoBuf_2eproto_initialized, descriptor_table_protodef_ChatCommandMessageProtoBuf_2eproto, "ChatCommandMessageProtoBuf.proto", 120,
  &descriptor_table_ChatCommandMessageProtoBuf_2eproto_once, descriptor_table_ChatCommandMessageProtoBuf_2eproto_sccs, descriptor_table_ChatCommandMessageProtoBuf_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_ChatCommandMessageProtoBuf_2eproto::offsets,
  file_level_metadata_ChatCommandMessageProtoBuf_2eproto, 1, file_level_enum_descriptors_ChatCommandMessageProtoBuf_2eproto, file_level_service_descriptors_ChatCommandMessageProtoBuf_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_ChatCommandMessageProtoBuf_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_ChatCommandMessageProtoBuf_2eproto), true);
namespace ChatterBoxCore {
namespace Protocols {

// ===================================================================

void ChatCommandMessageProtoBuf::InitAsDefaultInstance() {
}
class ChatCommandMessageProtoBuf::_Internal {
 public:
};

ChatCommandMessageProtoBuf::ChatCommandMessageProtoBuf()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:ChatterBoxCore.Protocols.ChatCommandMessageProtoBuf)
}
ChatCommandMessageProtoBuf::ChatCommandMessageProtoBuf(const ChatCommandMessageProtoBuf& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  chatwithuser_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_chatwithuser().empty()) {
    chatwithuser_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.chatwithuser_);
  }
  // @@protoc_insertion_point(copy_constructor:ChatterBoxCore.Protocols.ChatCommandMessageProtoBuf)
}

void ChatCommandMessageProtoBuf::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_ChatCommandMessageProtoBuf_ChatCommandMessageProtoBuf_2eproto.base);
  chatwithuser_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

ChatCommandMessageProtoBuf::~ChatCommandMessageProtoBuf() {
  // @@protoc_insertion_point(destructor:ChatterBoxCore.Protocols.ChatCommandMessageProtoBuf)
  SharedDtor();
}

void ChatCommandMessageProtoBuf::SharedDtor() {
  chatwithuser_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void ChatCommandMessageProtoBuf::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ChatCommandMessageProtoBuf& ChatCommandMessageProtoBuf::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ChatCommandMessageProtoBuf_ChatCommandMessageProtoBuf_2eproto.base);
  return *internal_default_instance();
}


void ChatCommandMessageProtoBuf::Clear() {
// @@protoc_insertion_point(message_clear_start:ChatterBoxCore.Protocols.ChatCommandMessageProtoBuf)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  chatwithuser_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

const char* ChatCommandMessageProtoBuf::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string chatWithUser = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          auto str = _internal_mutable_chatwithuser();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "ChatterBoxCore.Protocols.ChatCommandMessageProtoBuf.chatWithUser"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* ChatCommandMessageProtoBuf::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:ChatterBoxCore.Protocols.ChatCommandMessageProtoBuf)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string chatWithUser = 4;
  if (this->chatwithuser().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_chatwithuser().data(), static_cast<int>(this->_internal_chatwithuser().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "ChatterBoxCore.Protocols.ChatCommandMessageProtoBuf.chatWithUser");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_chatwithuser(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ChatterBoxCore.Protocols.ChatCommandMessageProtoBuf)
  return target;
}

size_t ChatCommandMessageProtoBuf::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ChatterBoxCore.Protocols.ChatCommandMessageProtoBuf)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string chatWithUser = 4;
  if (this->chatwithuser().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_chatwithuser());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ChatCommandMessageProtoBuf::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ChatterBoxCore.Protocols.ChatCommandMessageProtoBuf)
  GOOGLE_DCHECK_NE(&from, this);
  const ChatCommandMessageProtoBuf* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ChatCommandMessageProtoBuf>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ChatterBoxCore.Protocols.ChatCommandMessageProtoBuf)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ChatterBoxCore.Protocols.ChatCommandMessageProtoBuf)
    MergeFrom(*source);
  }
}

void ChatCommandMessageProtoBuf::MergeFrom(const ChatCommandMessageProtoBuf& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ChatterBoxCore.Protocols.ChatCommandMessageProtoBuf)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.chatwithuser().size() > 0) {

    chatwithuser_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.chatwithuser_);
  }
}

void ChatCommandMessageProtoBuf::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ChatterBoxCore.Protocols.ChatCommandMessageProtoBuf)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ChatCommandMessageProtoBuf::CopyFrom(const ChatCommandMessageProtoBuf& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ChatterBoxCore.Protocols.ChatCommandMessageProtoBuf)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ChatCommandMessageProtoBuf::IsInitialized() const {
  return true;
}

void ChatCommandMessageProtoBuf::InternalSwap(ChatCommandMessageProtoBuf* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  chatwithuser_.Swap(&other->chatwithuser_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::PROTOBUF_NAMESPACE_ID::Metadata ChatCommandMessageProtoBuf::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace Protocols
}  // namespace ChatterBoxCore
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::ChatterBoxCore::Protocols::ChatCommandMessageProtoBuf* Arena::CreateMaybeMessage< ::ChatterBoxCore::Protocols::ChatCommandMessageProtoBuf >(Arena* arena) {
  return Arena::CreateInternal< ::ChatterBoxCore::Protocols::ChatCommandMessageProtoBuf >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
