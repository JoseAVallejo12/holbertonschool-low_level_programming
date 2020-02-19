#include "holberton.h"

/**
 *rev_string - reverse a string
 *@s: Parameter
 *Return: Always void
 */

void rev_string(char *s)
{
	int n, sad, l;
	char c;

	for (n = 0; s[n] != '\0'; n++)
		;

	l = n;
	for (n--, sad = 0; sad < l / 2; n--, sad++)
	{
		c = s[sad];
		s[sad] = s[n];
		s[n] = c;
	}
}

