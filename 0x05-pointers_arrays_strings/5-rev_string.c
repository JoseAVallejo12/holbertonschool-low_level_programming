#include "holberton.h"

/**
 *rev_string - reverse a string
 *@s: Parameter
 *Return: Always void
 */

void rev_string(char *s)
{
	int n, a;
	n = 0;
	a = 0;

	char c[n + 1];

	while (s[n] != '\0')
	{
		c[n] = s[n];
		n++;
	}
	while (n--)
	{
		s[a] = c[n];
		a++;
	}
}
