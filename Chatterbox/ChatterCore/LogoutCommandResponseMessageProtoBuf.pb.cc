// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: LogoutCommandResponseMessageProtoBuf.proto

#include "LogoutCommandResponseMessageProtoBuf.pb.h"

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
class LogoutCommandResponseMessageProtoBufDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<LogoutCommandResponseMessageProtoBuf> _instance;
} _LogoutCommandResponseMessageProtoBuf_default_instance_;
}  // namespace Protocols
}  // namespace ChatterBoxCore
static void InitDefaultsscc_info_LogoutCommandResponseMessageProtoBuf_LogoutCommandResponseMessageProtoBuf_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::ChatterBoxCore::Protocols::_LogoutCommandResponseMessageProtoBuf_default_instance_;
    new (ptr) ::ChatterBoxCore::Protocols::LogoutCommandResponseMessageProtoBuf();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::ChatterBoxCore::Protocols::LogoutCommandResponseMessageProtoBuf::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_LogoutCommandResponseMessageProtoBuf_LogoutCommandResponseMessageProtoBuf_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_LogoutCommandResponseMessageProtoBuf_LogoutCommandResponseMessageProtoBuf_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_LogoutCommandResponseMessageProtoBuf_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_LogoutCommandResponseMessageProtoBuf_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_LogoutCommandResponseMessageProtoBuf_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_LogoutCommandResponseMessageProtoBuf_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::ChatterBoxCore::Protocols::LogoutCommandResponseMessageProtoBuf, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::ChatterBoxCore::Protocols::LogoutCommandResponseMessageProtoBuf)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::ChatterBoxCore::Protocols::_LogoutCommandResponseMessageProtoBuf_default_instance_),
};

const char descriptor_table_protodef_LogoutCommandResponseMessageProtoBuf_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n*LogoutCommandResponseMessageProtoBuf.p"
  "roto\022\030ChatterBoxCore.Protocols\"&\n$Logout"
  "CommandResponseMessageProtoBufb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_LogoutCommandResponseMessageProtoBuf_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_LogoutCommandResponseMessageProtoBuf_2eproto_sccs[1] = {
  &scc_info_LogoutCommandResponseMessageProtoBuf_LogoutCommandResponseMessageProtoBuf_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_LogoutCommandResponseMessageProtoBuf_2eproto_once;
static bool descriptor_table_LogoutCommandResponseMessageProtoBuf_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_LogoutCommandResponseMessageProtoBuf_2eproto = {
  &descriptor_table_LogoutCommandResponseMessageProtoBuf_2eproto_initialized, descriptor_table_protodef_LogoutCommandResponseMessageProtoBuf_2eproto, "LogoutCommandResponseMessageProtoBuf.proto", 118,
  &descriptor_table_LogoutCommandResponseMessageProtoBuf_2eproto_once, descriptor_table_LogoutCommandResponseMessageProtoBuf_2eproto_sccs, descriptor_table_LogoutCommandResponseMessageProtoBuf_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_LogoutCommandResponseMessageProtoBuf_2eproto::offsets,
  file_level_metadata_LogoutCommandResponseMessageProtoBuf_2eproto, 1, file_level_enum_descriptors_LogoutCommandResponseMessageProtoBuf_2eproto, file_level_service_descriptors_LogoutCommandResponseMessageProtoBuf_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_LogoutCommandResponseMessageProtoBuf_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_LogoutCommandResponseMessageProtoBuf_2eproto), true);
namespace ChatterBoxCore {
namespace Protocols {

// ===================================================================

void LogoutCommandResponseMessageProtoBuf::InitAsDefaultInstance() {
}
class LogoutCommandResponseMessageProtoBuf::_Internal {
 public:
};

LogoutCommandResponseMessageProtoBuf::LogoutCommandResponseMessageProtoBuf()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:ChatterBoxCore.Protocols.LogoutCommandResponseMessageProtoBuf)
}
LogoutCommandResponseMessageProtoBuf::LogoutCommandResponseMessageProtoBuf(const LogoutCommandResponseMessageProtoBuf& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:ChatterBoxCore.Protocols.LogoutCommandResponseMessageProtoBuf)
}

void LogoutCommandResponseMessageProtoBuf::SharedCtor() {
}

LogoutCommandResponseMessageProtoBuf::~LogoutCommandResponseMessageProtoBuf() {
  // @@protoc_insertion_point(destructor:ChatterBoxCore.Protocols.LogoutCommandResponseMessageProtoBuf)
  SharedDtor();
}

void LogoutCommandResponseMessageProtoBuf::SharedDtor() {
}

void LogoutCommandResponseMessageProtoBuf::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const LogoutCommandResponseMessageProtoBuf& LogoutCommandResponseMessageProtoBuf::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_LogoutCommandResponseMessageProtoBuf_LogoutCommandResponseMessageProtoBuf_2eproto.base);
  return *internal_default_instance();
}


void LogoutCommandResponseMessageProtoBuf::Clear() {
// @@protoc_insertion_point(message_clear_start:ChatterBoxCore.Protocols.LogoutCommandResponseMessageProtoBuf)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_metadata_.Clear();
}

const char* LogoutCommandResponseMessageProtoBuf::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* LogoutCommandResponseMessageProtoBuf::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:ChatterBoxCore.Protocols.LogoutCommandResponseMessageProtoBuf)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ChatterBoxCore.Protocols.LogoutCommandResponseMessageProtoBuf)
  return target;
}

size_t LogoutCommandResponseMessageProtoBuf::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ChatterBoxCore.Protocols.LogoutCommandResponseMessageProtoBuf)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void LogoutCommandResponseMessageProtoBuf::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ChatterBoxCore.Protocols.LogoutCommandResponseMessageProtoBuf)
  GOOGLE_DCHECK_NE(&from, this);
  const LogoutCommandResponseMessageProtoBuf* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<LogoutCommandResponseMessageProtoBuf>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ChatterBoxCore.Protocols.LogoutCommandResponseMessageProtoBuf)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ChatterBoxCore.Protocols.LogoutCommandResponseMessageProtoBuf)
    MergeFrom(*source);
  }
}

void LogoutCommandResponseMessageProtoBuf::MergeFrom(const LogoutCommandResponseMessageProtoBuf& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ChatterBoxCore.Protocols.LogoutCommandResponseMessageProtoBuf)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

}

void LogoutCommandResponseMessageProtoBuf::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ChatterBoxCore.Protocols.LogoutCommandResponseMessageProtoBuf)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LogoutCommandResponseMessageProtoBuf::CopyFrom(const LogoutCommandResponseMessageProtoBuf& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ChatterBoxCore.Protocols.LogoutCommandResponseMessageProtoBuf)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LogoutCommandResponseMessageProtoBuf::IsInitialized() const {
  return true;
}

void LogoutCommandResponseMessageProtoBuf::InternalSwap(LogoutCommandResponseMessageProtoBuf* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::PROTOBUF_NAMESPACE_ID::Metadata LogoutCommandResponseMessageProtoBuf::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace Protocols
}  // namespace ChatterBoxCore
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::ChatterBoxCore::Protocols::LogoutCommandResponseMessageProtoBuf* Arena::CreateMaybeMessage< ::ChatterBoxCore::Protocols::LogoutCommandResponseMessageProtoBuf >(Arena* arena) {
  return Arena::CreateInternal< ::ChatterBoxCore::Protocols::LogoutCommandResponseMessageProtoBuf >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
