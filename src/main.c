#include "../include/clox/chunk.h"
#include "../include/clox/common.h"
#include "../include/clox/debug.h"

int main(int args, const char *argv[]) {
  Chunk chunk;
  init_chunk(&chunk);
  write_chunk(&chunk, OP_RETURN);

  disassemble_chunk(&chunk, "chunk test");
  free_chunk(&chunk);
  return 0;
}
