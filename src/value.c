#include <stdio.h>

#include "../include/clox/memory.h"
#include "../include/clox/value.h"

void init_ValueArray(ValueArray *array)
{
	array->values = NULL;
	array->capacity = 0;
	array->count = 0;
}

void write_ValueArray(ValueArray *array, Value value)
{
	if (array->capacity < array->count + 1) {
		int oldCapacity = array->capacity;
		array->capacity = GROW_CAPACITY(oldCapacity);
		array->values = GROW_ARRAY(Value, array->values, oldCapacity,
					   array->capacity);
	}

	array->values[array->count] = value;
	array->count++;
}

void free_ValueArray(ValueArray *array)
{
	FREE_ARRAY(Value, array->values, array->capacity);
	init_ValueArray(array);
}

void print_value(Value value) {
        printf("%g", value);
}
