#include "holberton.h"

/**
 *print_rev - check the code for Holberton School students.
 *@s: Parameters*
 * Return: Always void.
 */

void print_rev(char *s)
{
	int n;

	n = 0;
	while (s[n] != '\0')
		n++;

	while (n--)
		_putchar(s[n]);

	_putchar('\n');

}

