// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: types.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "types.pb.h"

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

namespace tensorflow {

namespace protobuf_types_2eproto {


namespace {

const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

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
};

const ::google::protobuf::uint32 TableStruct::offsets[] = { ~0u };
static const ::google::protobuf::internal::MigrationSchema* schemas = NULL;
static const ::google::protobuf::Message* const* file_default_instances = NULL;
namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "types.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      NULL, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace

void TableStruct::Shutdown() {
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\013types.proto\022\ntensorflow*\346\005\n\010DataType\022\016"
      "\n\nDT_INVALID\020\000\022\014\n\010DT_FLOAT\020\001\022\r\n\tDT_DOUBL"
      "E\020\002\022\014\n\010DT_INT32\020\003\022\014\n\010DT_UINT8\020\004\022\014\n\010DT_IN"
      "T16\020\005\022\013\n\007DT_INT8\020\006\022\r\n\tDT_STRING\020\007\022\020\n\014DT_"
      "COMPLEX64\020\010\022\014\n\010DT_INT64\020\t\022\013\n\007DT_BOOL\020\n\022\014"
      "\n\010DT_QINT8\020\013\022\r\n\tDT_QUINT8\020\014\022\r\n\tDT_QINT32"
      "\020\r\022\017\n\013DT_BFLOAT16\020\016\022\r\n\tDT_QINT16\020\017\022\016\n\nDT"
      "_QUINT16\020\020\022\r\n\tDT_UINT16\020\021\022\021\n\rDT_COMPLEX1"
      "28\020\022\022\013\n\007DT_HALF\020\023\022\017\n\013DT_RESOURCE\020\024\022\016\n\nDT"
      "_VARIANT\020\025\022\020\n\014DT_FLOAT_REF\020e\022\021\n\rDT_DOUBL"
      "E_REF\020f\022\020\n\014DT_INT32_REF\020g\022\020\n\014DT_UINT8_RE"
      "F\020h\022\020\n\014DT_INT16_REF\020i\022\017\n\013DT_INT8_REF\020j\022\021"
      "\n\rDT_STRING_REF\020k\022\024\n\020DT_COMPLEX64_REF\020l\022"
      "\020\n\014DT_INT64_REF\020m\022\017\n\013DT_BOOL_REF\020n\022\020\n\014DT"
      "_QINT8_REF\020o\022\021\n\rDT_QUINT8_REF\020p\022\021\n\rDT_QI"
      "NT32_REF\020q\022\023\n\017DT_BFLOAT16_REF\020r\022\021\n\rDT_QI"
      "NT16_REF\020s\022\022\n\016DT_QUINT16_REF\020t\022\021\n\rDT_UIN"
      "T16_REF\020u\022\025\n\021DT_COMPLEX128_REF\020v\022\017\n\013DT_H"
      "ALF_REF\020w\022\023\n\017DT_RESOURCE_REF\020x\022\022\n\016DT_VAR"
      "IANT_REF\020yB,\n\030org.tensorflow.frameworkB\013"
      "TypesProtosP\001\370\001\001b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 824);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "types.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_types_2eproto

const ::google::protobuf::EnumDescriptor* DataType_descriptor() {
  protobuf_types_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_types_2eproto::file_level_enum_descriptors[0];
}
bool DataType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 101:
    case 102:
    case 103:
    case 104:
    case 105:
    case 106:
    case 107:
    case 108:
    case 109:
    case 110:
    case 111:
    case 112:
    case 113:
    case 114:
    case 115:
    case 116:
    case 117:
    case 118:
    case 119:
    case 120:
    case 121:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)
