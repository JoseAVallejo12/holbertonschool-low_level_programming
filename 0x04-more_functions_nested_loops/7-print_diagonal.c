#include "holberton.h"

/**
 *print_diagonal - Print straigth line n time
 *@n: Parameter
 *Return: always return zero
 */

void print_diagonal(int n)
{
	int i, e;

	if (n <= 0)
	{
		_putchar('\n');
	}

	i = 0;
	if (n > 0)
	{
		while (i < n)
		{
			for (e = 0; e <= i - 1; e++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
}

