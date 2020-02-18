#include "holberton.h"
#include <stdio.h>

/**
 *print_array - Prints half of a string
 *@a: Punter
 *@n: integer
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != 4)
		{
			printf(",");
			printf(" ");
		}

	}
	putchar('\n');
}

