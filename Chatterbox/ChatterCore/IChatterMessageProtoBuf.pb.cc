// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: IChatterMessageProtoBuf.proto

#include "IChatterMessageProtoBuf.pb.h"

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
namespace ChatterCore {
namespace Protocols {
class IChatterMessageProtoBufDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<IChatterMessageProtoBuf> _instance;
} _IChatterMessageProtoBuf_default_instance_;
}  // namespace Protocols
}  // namespace ChatterCore
static void InitDefaultsscc_info_IChatterMessageProtoBuf_IChatterMessageProtoBuf_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::ChatterCore::Protocols::_IChatterMessageProtoBuf_default_instance_;
    new (ptr) ::ChatterCore::Protocols::IChatterMessageProtoBuf();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::ChatterCore::Protocols::IChatterMessageProtoBuf::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_IChatterMessageProtoBuf_IChatterMessageProtoBuf_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_IChatterMessageProtoBuf_IChatterMessageProtoBuf_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_IChatterMessageProtoBuf_2eproto[1];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_IChatterMessageProtoBuf_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_IChatterMessageProtoBuf_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_IChatterMessageProtoBuf_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::ChatterCore::Protocols::IChatterMessageProtoBuf, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::ChatterCore::Protocols::IChatterMessageProtoBuf, chattertype_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::ChatterCore::Protocols::IChatterMessageProtoBuf)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::ChatterCore::Protocols::_IChatterMessageProtoBuf_default_instance_),
};

const char descriptor_table_protodef_IChatterMessageProtoBuf_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\035IChatterMessageProtoBuf.proto\022\025Chatter"
  "Core.Protocols\"\254\001\n\027IChatterMessageProtoB"
  "uf\022W\n\013chatterType\030\003 \001(\0162B.ChatterCore.Pr"
  "otocols.IChatterMessageProtoBuf.ChatterT"
  "ypeProtoBuf\"8\n\023ChatterTypeProtoBuf\022\017\n\013Te"
  "xtChatter\020\000\022\020\n\014AudioChatter\020\001b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_IChatterMessageProtoBuf_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_IChatterMessageProtoBuf_2eproto_sccs[1] = {
  &scc_info_IChatterMessageProtoBuf_IChatterMessageProtoBuf_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_IChatterMessageProtoBuf_2eproto_once;
static bool descriptor_table_IChatterMessageProtoBuf_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_IChatterMessageProtoBuf_2eproto = {
  &descriptor_table_IChatterMessageProtoBuf_2eproto_initialized, descriptor_table_protodef_IChatterMessageProtoBuf_2eproto, "IChatterMessageProtoBuf.proto", 237,
  &descriptor_table_IChatterMessageProtoBuf_2eproto_once, descriptor_table_IChatterMessageProtoBuf_2eproto_sccs, descriptor_table_IChatterMessageProtoBuf_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_IChatterMessageProtoBuf_2eproto::offsets,
  file_level_metadata_IChatterMessageProtoBuf_2eproto, 1, file_level_enum_descriptors_IChatterMessageProtoBuf_2eproto, file_level_service_descriptors_IChatterMessageProtoBuf_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_IChatterMessageProtoBuf_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_IChatterMessageProtoBuf_2eproto), true);
namespace ChatterCore {
namespace Protocols {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* IChatterMessageProtoBuf_ChatterTypeProtoBuf_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_IChatterMessageProtoBuf_2eproto);
  return file_level_enum_descriptors_IChatterMessageProtoBuf_2eproto[0];
}
bool IChatterMessageProtoBuf_ChatterTypeProtoBuf_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
constexpr IChatterMessageProtoBuf_ChatterTypeProtoBuf IChatterMessageProtoBuf::TextChatter;
constexpr IChatterMessageProtoBuf_ChatterTypeProtoBuf IChatterMessageProtoBuf::AudioChatter;
constexpr IChatterMessageProtoBuf_ChatterTypeProtoBuf IChatterMessageProtoBuf::ChatterTypeProtoBuf_MIN;
constexpr IChatterMessageProtoBuf_ChatterTypeProtoBuf IChatterMessageProtoBuf::ChatterTypeProtoBuf_MAX;
constexpr int IChatterMessageProtoBuf::ChatterTypeProtoBuf_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)

// ===================================================================

void IChatterMessageProtoBuf::InitAsDefaultInstance() {
}
class IChatterMessageProtoBuf::_Internal {
 public:
};

IChatterMessageProtoBuf::IChatterMessageProtoBuf()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:ChatterCore.Protocols.IChatterMessageProtoBuf)
}
IChatterMessageProtoBuf::IChatterMessageProtoBuf(const IChatterMessageProtoBuf& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  chattertype_ = from.chattertype_;
  // @@protoc_insertion_point(copy_constructor:ChatterCore.Protocols.IChatterMessageProtoBuf)
}

void IChatterMessageProtoBuf::SharedCtor() {
  chattertype_ = 0;
}

IChatterMessageProtoBuf::~IChatterMessageProtoBuf() {
  // @@protoc_insertion_point(destructor:ChatterCore.Protocols.IChatterMessageProtoBuf)
  SharedDtor();
}

void IChatterMessageProtoBuf::SharedDtor() {
}

void IChatterMessageProtoBuf::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const IChatterMessageProtoBuf& IChatterMessageProtoBuf::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_IChatterMessageProtoBuf_IChatterMessageProtoBuf_2eproto.base);
  return *internal_default_instance();
}


void IChatterMessageProtoBuf::Clear() {
// @@protoc_insertion_point(message_clear_start:ChatterCore.Protocols.IChatterMessageProtoBuf)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  chattertype_ = 0;
  _internal_metadata_.Clear();
}

const char* IChatterMessageProtoBuf::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .ChatterCore.Protocols.IChatterMessageProtoBuf.ChatterTypeProtoBuf chatterType = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
          _internal_set_chattertype(static_cast<::ChatterCore::Protocols::IChatterMessageProtoBuf_ChatterTypeProtoBuf>(val));
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

::PROTOBUF_NAMESPACE_ID::uint8* IChatterMessageProtoBuf::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:ChatterCore.Protocols.IChatterMessageProtoBuf)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .ChatterCore.Protocols.IChatterMessageProtoBuf.ChatterTypeProtoBuf chatterType = 3;
  if (this->chattertype() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      3, this->_internal_chattertype(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ChatterCore.Protocols.IChatterMessageProtoBuf)
  return target;
}

size_t IChatterMessageProtoBuf::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ChatterCore.Protocols.IChatterMessageProtoBuf)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .ChatterCore.Protocols.IChatterMessageProtoBuf.ChatterTypeProtoBuf chatterType = 3;
  if (this->chattertype() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_chattertype());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void IChatterMessageProtoBuf::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ChatterCore.Protocols.IChatterMessageProtoBuf)
  GOOGLE_DCHECK_NE(&from, this);
  const IChatterMessageProtoBuf* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<IChatterMessageProtoBuf>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ChatterCore.Protocols.IChatterMessageProtoBuf)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ChatterCore.Protocols.IChatterMessageProtoBuf)
    MergeFrom(*source);
  }
}

void IChatterMessageProtoBuf::MergeFrom(const IChatterMessageProtoBuf& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ChatterCore.Protocols.IChatterMessageProtoBuf)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.chattertype() != 0) {
    _internal_set_chattertype(from._internal_chattertype());
  }
}

void IChatterMessageProtoBuf::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ChatterCore.Protocols.IChatterMessageProtoBuf)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void IChatterMessageProtoBuf::CopyFrom(const IChatterMessageProtoBuf& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ChatterCore.Protocols.IChatterMessageProtoBuf)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool IChatterMessageProtoBuf::IsInitialized() const {
  return true;
}

void IChatterMessageProtoBuf::InternalSwap(IChatterMessageProtoBuf* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(chattertype_, other->chattertype_);
}

::PROTOBUF_NAMESPACE_ID::Metadata IChatterMessageProtoBuf::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace Protocols
}  // namespace ChatterCore
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::ChatterCore::Protocols::IChatterMessageProtoBuf* Arena::CreateMaybeMessage< ::ChatterCore::Protocols::IChatterMessageProtoBuf >(Arena* arena) {
  return Arena::CreateInternal< ::ChatterCore::Protocols::IChatterMessageProtoBuf >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
