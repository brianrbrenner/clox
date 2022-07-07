#ifndef CHUNK
#define CHUNK

#include "common.h"

typedef enum {
  OP_RETURN,
} OP_CODE;

typedef struct {
  int capacity;
  int count;
  uint8_t *code;
} Chunk;

void init_chunk(Chunk *chunk);
void free_chunk(Chunk *chunk);
void write_chunk(Chunk *chunk, uint8_t byte);

#endif
