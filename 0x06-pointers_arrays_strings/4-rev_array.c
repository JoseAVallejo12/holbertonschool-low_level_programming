#include "holberton.h"

/**
 *reverse_array - reverse a array of the integers
 *@a: Parameter
 *@n: legenth of array
 *Return: Always void
 */

void reverse_array(int *a, int n)
{
	int *start, *end, c, i, j;

	start = a;
	end = a;
	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		c = start[i];
		start[i] = end[j];
		end[j] = c;
		j--;
	}
}
