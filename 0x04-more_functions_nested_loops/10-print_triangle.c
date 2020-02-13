#include "holberton.h"

/**
 *print_triangle - Print numeral signe n time
 *@size: Parameter
 *Return: always return zero
 */

void print_triangle(int size)
{
	int i, e, f;

	if (size <= 0)
	{
		_putchar('\n');
	}

	i = 0;
	if (size > 0)
	{
		while (i < size)
		{
			i++;
			for (e = 0; e < size - i; e++)
				_putchar('.');
			for (f = 0; f < i; f++)
				_putchar('#');
			_putchar('\n');
		}
	}
}

