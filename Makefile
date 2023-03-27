# Compile the C interpreter.
clox: main.o chunk.o memory.o debug.o
	gcc main.o chunk.o memory.o debug.o -o clox

main.o: src/main.c
	gcc -c src/main.c

chunk.o: src/chunk.c include/clox/chunk.h
	gcc -c src/chunk.c

memory.o: src/memory.c include/clox/memory.h
	gcc -c src/memory.c

debug.o: src/debug.c include/clox/debug.h
	gcc -c src/debug.c

clean:
	rm *.o clox
target: dependencies
	action
