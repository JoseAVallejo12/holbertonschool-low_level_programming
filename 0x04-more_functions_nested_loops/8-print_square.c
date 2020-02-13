#include "holberton.h"

/**
 *print_square - Print numeral signe n time
 *@size: Parameter
 *Return: always return zero
 */

void print_square(int size)
{
	int i, e;

	if (size <= 0)
	{
		_putchar('\n');
	}

	i = 0;
	if (size > 0)
	{
		while (i < size)
		{
			for (e = 0; e < size; e++)
			{
				_putchar('#');
			}
			_putchar('\n');
			i++;
		}
	}
}

