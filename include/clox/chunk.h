#ifndef CHUNK
#define CHUNK

#include "common.h"
#include "value.h"

typedef enum {
  OP_CONSTANT,
  OP_RETURN,
} OP_CODE;

typedef struct {
  int capacity;
  int count;
  ValueArray constants;
  uint8_t *code;
} Chunk;

void init_chunk(Chunk *chunk);
void free_chunk(Chunk *chunk);
void write_chunk(Chunk *chunk, uint8_t byte);
int add_constant(Chunk* chunk, Value value);

#endif
