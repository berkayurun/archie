/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: fault.proto */

#ifndef PROTOBUF_C_fault_2eproto__INCLUDED
#define PROTOBUF_C_fault_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1004001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct Archie__Fault Archie__Fault;
typedef struct Archie__FaultPack Archie__FaultPack;


/* --- enums --- */


/* --- messages --- */

struct  Archie__Fault
{
  ProtobufCMessage base;
  uint64_t address;
  uint64_t type;
  uint64_t model;
  uint64_t lifespan;
  uint64_t trigger_address;
  uint64_t trigger_hitcounter;
  uint64_t mask_upper;
  uint64_t mask_lower;
  uint32_t num_bytes;
};
#define ARCHIE__FAULT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&archie__fault__descriptor) \
    , 0, 0, 0, 0, 0, 0, 0, 0, 0 }


struct  Archie__FaultPack
{
  ProtobufCMessage base;
  size_t n_faults;
  Archie__Fault **faults;
};
#define ARCHIE__FAULT__PACK__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&archie__fault__pack__descriptor) \
    , 0,NULL }


/* Archie__Fault methods */
void   archie__fault__init
                     (Archie__Fault         *message);
size_t archie__fault__get_packed_size
                     (const Archie__Fault   *message);
size_t archie__fault__pack
                     (const Archie__Fault   *message,
                      uint8_t             *out);
size_t archie__fault__pack_to_buffer
                     (const Archie__Fault   *message,
                      ProtobufCBuffer     *buffer);
Archie__Fault *
       archie__fault__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   archie__fault__free_unpacked
                     (Archie__Fault *message,
                      ProtobufCAllocator *allocator);
/* Archie__FaultPack methods */
void   archie__fault__pack__init
                     (Archie__FaultPack         *message);
size_t archie__fault__pack__get_packed_size
                     (const Archie__FaultPack   *message);
size_t archie__fault__pack__pack
                     (const Archie__FaultPack   *message,
                      uint8_t             *out);
size_t archie__fault__pack__pack_to_buffer
                     (const Archie__FaultPack   *message,
                      ProtobufCBuffer     *buffer);
Archie__FaultPack *
       archie__fault__pack__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   archie__fault__pack__free_unpacked
                     (Archie__FaultPack *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Archie__Fault_Closure)
                 (const Archie__Fault *message,
                  void *closure_data);
typedef void (*Archie__FaultPack_Closure)
                 (const Archie__FaultPack *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor archie__fault__descriptor;
extern const ProtobufCMessageDescriptor archie__fault__pack__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_fault_2eproto__INCLUDED */
