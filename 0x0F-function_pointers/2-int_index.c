#include "function_pointers.h"

/**
 * int_index - funtion
 * @array: string to process
 * @size: legeth of array
 * @cmp: Pointer to funtion
 * Return: Alway int number
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			result = cmp(array[i]);
			if (result != 0)
				return (i);
		}
	}
	return (-1);
}

