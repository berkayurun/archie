# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: control.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import builder as _builder
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n\rcontrol.proto\x12\x06\x61rchie\"\xb4\x03\n\x06\x43onfig\x12\x14\n\x0cmax_duration\x18\x01 \x01(\x03\x12\x12\n\nnum_faults\x18\x02 \x01(\x03\x12\x14\n\x0ctb_exec_list\x18\x03 \x01(\x08\x12\x0f\n\x07tb_info\x18\x04 \x01(\x08\x12\x10\n\x08mem_info\x18\x05 \x01(\x08\x12\x15\n\rstart_address\x18\x06 \x01(\x04\x12\x15\n\rstart_counter\x18\x07 \x01(\x04\x12\x1d\n\x08\x65nd_list\x18\x08 \x03(\x0b\x32\x0b.archie.End\x12 \n\x18tb_exec_list_ring_buffer\x18\t \x01(\x08\x12\x16\n\x0enum_memregions\x18\n \x01(\x03\x12)\n\nmemorydump\x18\x0b \x03(\x0b\x32\x15.archie.Memory_Region\x12\x1b\n\x13\x65xists_tb_exec_list\x18\x0c \x01(\x08\x12\x16\n\x0e\x65xists_tb_info\x18\r \x01(\x08\x12\x14\n\x0c\x65xists_start\x18\x0e \x01(\x08\x12\x12\n\nexists_end\x18\x0f \x01(\x08\x12\x1a\n\x12\x65xists_memory_dump\x18\x10 \x01(\x08\x12\x1a\n\x12\x65xists_ring_buffer\x18\x11 \x01(\x08\"\'\n\x03\x45nd\x12\x0f\n\x07\x61\x64\x64ress\x18\x01 \x01(\x04\x12\x0f\n\x07\x63ounter\x18\x02 \x01(\x04\"0\n\rMemory_Region\x12\x0f\n\x07\x61\x64\x64ress\x18\x01 \x01(\x04\x12\x0e\n\x06length\x18\x02 \x01(\x04\x62\x06proto3')

_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, globals())
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'control_pb2', globals())
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _CONFIG._serialized_start=26
  _CONFIG._serialized_end=462
  _END._serialized_start=464
  _END._serialized_end=503
  _MEMORY_REGION._serialized_start=505
  _MEMORY_REGION._serialized_end=553
# @@protoc_insertion_point(module_scope)