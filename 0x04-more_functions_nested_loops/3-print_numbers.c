#include "holberton.h"

/**
 *print_numbers - Print number of 0 to 9
 *Return: always void
 */

void print_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		_putchar(i + 48);
		i++;
	}
	_putchar(10);
}

