// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MysqlDescriptor.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "MysqlDescriptor.pb.h"

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

namespace soul {

namespace protobuf_MysqlDescriptor_2eproto {


namespace {


}  // namespace

const ::google::protobuf::uint32 TableStruct::offsets[] = { ~0u };
static const ::google::protobuf::internal::MigrationSchema* schemas = NULL;
static const ::google::protobuf::Message* const* file_default_instances = NULL;
namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "MysqlDescriptor.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      NULL, NULL, NULL);
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
  ::google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults();
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    ::google::protobuf::FieldOptions::internal_default_instance(),
    1000, 8, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    ::google::protobuf::FieldOptions::internal_default_instance(),
    1001, 8, false, false);
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\025MysqlDescriptor.proto\022\004soul\032 google/pr"
      "otobuf/descriptor.proto:8\n\tupdatekey\022\035.g"
      "oogle.protobuf.FieldOptions\030\350\007 \001(\010:\005fals"
      "e:9\n\nprimarykey\022\035.google.protobuf.FieldO"
      "ptions\030\351\007 \001(\010:\005false"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 180);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "MysqlDescriptor.proto", &protobuf_RegisterTypes);
  ::google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::AddDescriptors();
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

}  // namespace protobuf_MysqlDescriptor_2eproto

::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  updatekey(kUpdatekeyFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  primarykey(kPrimarykeyFieldNumber, false);

// @@protoc_insertion_point(namespace_scope)

}  // namespace soul

// @@protoc_insertion_point(global_scope)
