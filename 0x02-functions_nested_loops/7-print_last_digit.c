#include"holberton.h"

/**
 *print_last_digit - parametrer c
 *@n: parametrer
 *Return: 1 for lower case or 0 for otherwise
 */

int print_last_digit(int n)
{
	int a;

	a = n % 10;
	if (a < 0)
	{
		a *= -1;
	}
	_putchar(a + 48);

	return (a);
}

