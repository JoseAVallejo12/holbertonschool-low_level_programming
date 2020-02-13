#include "holberton.h"

/**
 *myprint - ptint n times
 *@n: Parameter
 *Return: always void
 */

void myprint(int n)
{
	int i;

	for (i = 0; i <= n; i++)
		_putchar('.');
}

/**
 *print_diagonal - Print straigth line n time
 *@n: Parameter
 *Return: always return zero
 */

void print_diagonal(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');

	i = 0;
	if (n > 0)
	{
		while (i != n)
		{
			myprint(i);
			_putchar(92);
			_putchar('\n');
			i++;
		}
	}
}

