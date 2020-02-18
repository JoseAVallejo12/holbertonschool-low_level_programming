#include "holberton.h"

/**
 *puts_half - check the code for Holberton School students.
 *@str: Parameter
 *
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
		n++;

	if (n % 2 != 0)
		n = (n - 1) / 2;
	else
		n = n / 2;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');

}

