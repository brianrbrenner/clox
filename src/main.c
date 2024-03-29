#include "../include/clox/chunk.h"
#include "../include/clox/common.h"
#include "../include/clox/debug.h"

int main(int args, const char *argv[])
{
	Chunk chunk;
	int constant = add_constant(&chunk, 1.5);
	write_chunk(&chunk, OP_CONSTANT, 123);
	write_chunk(&chunk, constant, 123);

	init_chunk(&chunk);
	write_chunk(&chunk, OP_RETURN, 123);

	disassemble_chunk(&chunk, "chunk test");
	free_chunk(&chunk);
	return 0;
}
