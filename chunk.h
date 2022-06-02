#ifndef CHUNK
#define CHUNK

#include "common.h"

typedef enum {
    OP_RETURN,
} OP_CODE;

typedef struct {
    uint8_t* code;
    int capacity;
    int count;
} Chunk;

#endif
