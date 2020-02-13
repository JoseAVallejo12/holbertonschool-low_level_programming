#include "holberton.h"

/**
 *print_most_numbers - Print number of 0 to 9 and exclude 2, and 4
 *Return: always void
 */

void print_most_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + 48);
		}
		i++;
	}
	_putchar(10);
}

