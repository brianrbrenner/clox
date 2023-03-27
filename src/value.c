#include <stdio.h>

#include "../include/clox/memory.h"
#include "../include/clox/value.h"

void init_ValueArray(ValueArray *array)
{
	array->values = NULL;
	array->capacity = 0;
	array->count = 0;
}
