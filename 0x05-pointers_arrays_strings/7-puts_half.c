#include "holberton.h"

/**
 *puts_half - check the code for Holberton School students.
 *@str: Parameter
 *
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int n, m;

	n = 0;
	m = 0;
	while (str[n] != '\0')
		n++;

	if (n + 1  % 2 != 0)
		m = (n - 1) / 2;
	else
		m = n / 2;

	while (str[m] != '\0')
	{
		m++;
		_putchar(str[m]);

	}
	_putchar('\n');

}

