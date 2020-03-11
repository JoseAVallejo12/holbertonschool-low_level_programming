#include "function_pointers.h"

/**
 * array_iterator - funtion
 * @array: string to process
 * @size: legeth of array
 * @action: Pointer to funtion
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}

