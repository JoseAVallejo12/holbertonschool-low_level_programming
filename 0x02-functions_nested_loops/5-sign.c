#include"holberton.h"

/**
 *print_sign - parametrer c
 *@n: parametrer
 *Return: 1 for lower case or 0 for otherwise
 */

int print_sign(int n)
{
	int r;

	if (n > 0)
	{
		_putchar('+');
		r = 1;
	}
	if (n == 0)
	{
		_putchar('0');
		r = 0;
	}
	if (n < 0)
	{
		_putchar('-');
		r = -1;
	}

	return (r);
}

