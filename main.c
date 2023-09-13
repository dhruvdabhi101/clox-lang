#include "chunk.h"
#include "debug.h"
#include "common.h"

int main(int argc, const char* argv[]) {
    Chunk chunk;
    initChunk(&chunk);
    writeChunk(&chunk, OP_RETURN);

    // disassemble all the instructions in the entire chunk
    disassembleChunk(&chunk, "test chunk");
    freeChunk(&chunk);
    return 0;
}
