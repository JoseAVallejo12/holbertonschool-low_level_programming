#include "holberton.h"

/**
 *print_line - Print straigth line n time
 *@n: Parameter
 *Return: always return zero
 */

void print_line(int n)
{

	if (n > 0)
	{
		while (n--)
			_putchar(95);
	}
	_putchar('\n');
}

