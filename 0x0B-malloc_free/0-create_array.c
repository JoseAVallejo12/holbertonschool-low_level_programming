#include "holberton.h"
#include <stdlib.h>

/**
 *create_array - back a pointer to array
 *@size: legeth of the array
 *@c: value for each position of the array
 *Return: Always an array dinamic
 */

char *create_array(unsigned int size, char c)
{
	char *A;
	unsigned int i;

	if (size == 0)
		return (0);

	A = (char *)malloc(size * sizeof(c));
	for (i = 0; i < size; i++)
		*(A + i) = c;

	return (A);
}
