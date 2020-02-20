#include "holberton.h"

/**
 *reverse_array - reverse a array of the integers
 *@a: Parameter
 *@n: legenth of array
 *Return: Always void
 */

void reverse_array(int *a, int n)
{
	int sad, l;
	char c;

	l = n;
	for (n--, sad = 0; sad < l / 2; n--, sad++)
	{
		c = a[sad];
		a[sad] = a[n];
		a[n] = c;
	}
}
