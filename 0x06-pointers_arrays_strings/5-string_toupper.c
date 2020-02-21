#include "holberton.h"

/**
 *_strcmp - funtion compare two string
 *@s1: Punter one
 *@s2: Punter two
 *Return: integer
 */

char *string_toupper(char *s)
{
	int n;

	n = 0;
	while (s[n] != '\0')
	{
		if(s[n] >= 'a' && s[n] <= 'z')
			s[n] = s[n] - 32;

		n++;
	}

	return (s);
}
