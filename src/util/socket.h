#ifndef _UTIL_SOCKET_H_
#define _UTIL_SOCKET_H_

#include <mex.h>

/*
  Struct with metadata fields, used to interpret socket types.

  The field `id` is the constant defined in `zmq.h`.
  The field `name` is the string representing this constant.
 */
typedef struct _stype_desc {
    int id;
    const char* name;
} zmq_socket_type_t;

const zmq_socket_type_t* socket_type_find_by_id(int id);
const zmq_socket_type_t* socket_type_find_by_name(char* type);

/* Extra conversions CONST => STRING */
mxArray* socktype_to_m(void* handler);

void socket_error();

#endif
