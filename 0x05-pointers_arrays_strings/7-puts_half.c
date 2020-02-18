#include "holberton.h"

/**
 * puts_half - Prints half of a string
 * @str: String
 */
void puts_half(char *str)
{
	int a;

	a = 0;

	while (str[a] != 0)
		a++;

	if (a + 1  % 2 != 0)
		a = (a - 1) / 2;
	else
		a = a / 2;

	a++;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}


	_putchar('\n');
}

