#include "holberton.h"
#include <stdio.h>

/**
 *print_diagsums - print sum diagonal matrux square
 *@a: matrix
 *@size: legenth
 *Return: Always void
 */

void print_diagsums(int *a, int size)
{
	int add1, add2, i;

	add1 = add2 = 0;

	for (i = 0; i < size; i++)
	{
		add1 = add1 + *(a + i * size + i);
		add2 = add2 + *(a + i * size + size - i - 1);
	}
	printf("%i, %i\n", add1, add2);
}
