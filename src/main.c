#include "chunk.h"
#include "common.h"

int main(int args, const char *argv[]) {
  Chunk chunk;
  init_chunk(&chunk);
  write_chunk(&chunk, OP_RETURN);
  free_chunk(&chunk);
  return 0;
}
