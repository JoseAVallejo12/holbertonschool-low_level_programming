#include "holberton.h"

/**
 *string_toupper - funtion conver lowcase to uppcase
 *@s: Punter
 *Return: char string
 */

char *string_toupper(char *s)
{
	int n;

	n = 0;
	while (s[n] != '\0')
	{
		if (s[n] >= 'a' && s[n] <= 'z')
			s[n] = s[n] - 32;

		n++;
	}

	return (s);
}
