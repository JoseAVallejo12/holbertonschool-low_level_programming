#include "holberton.h"

/**
 *_strcmp - funtion compare two string
 *@s1: Punter one
 *@s2: Punter two
 *Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	char c1, c2;

	do {
		c1 =  *s1++;
		c2 =  *s2++;
		if (c1 == '\0')
			return (c1 - c2);

	} while (c1 == c2);
	return (c1 - c2);
}

