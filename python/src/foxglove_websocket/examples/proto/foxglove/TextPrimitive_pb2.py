# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: foxglove/TextPrimitive.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import builder as _builder
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from foxglove import Color_pb2 as foxglove_dot_Color__pb2
from foxglove import Pose_pb2 as foxglove_dot_Pose__pb2


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n\x1c\x66oxglove/TextPrimitive.proto\x12\x08\x66oxglove\x1a\x14\x66oxglove/Color.proto\x1a\x13\x66oxglove/Pose.proto\"\x9a\x01\n\rTextPrimitive\x12\x1c\n\x04pose\x18\x01 \x01(\x0b\x32\x0e.foxglove.Pose\x12\x11\n\tbillboard\x18\x02 \x01(\x08\x12\x11\n\tfont_size\x18\x03 \x01(\x01\x12\x17\n\x0fscale_invariant\x18\x04 \x01(\x08\x12\x1e\n\x05\x63olor\x18\x05 \x01(\x0b\x32\x0f.foxglove.Color\x12\x0c\n\x04text\x18\x06 \x01(\tb\x06proto3')

_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, globals())
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'foxglove.TextPrimitive_pb2', globals())
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _TEXTPRIMITIVE._serialized_start=86
  _TEXTPRIMITIVE._serialized_end=240
# @@protoc_insertion_point(module_scope)