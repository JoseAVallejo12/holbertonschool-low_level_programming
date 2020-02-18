#include "holberton.h"

/**
 *swap_int - check the code for Holberton School students.
 *@a: Parameter
 *@b: Parameter
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int z;

	z = *b;
	*b = *a;
	*a  = z;

}

