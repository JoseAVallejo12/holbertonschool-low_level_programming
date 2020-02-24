#include "holberton.h"

/**
 *_strchr - find el character c en *s
 *@s: pointer dest string
 *@c: character to find
 *Return: Always string
 */

char *_strchr(char *s, char c)
{
	int i;
	char *str, c1;

	str = s;
	c1 = c;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		if (*(str + i) == c1)
		{
			return (str + i);
		}
	}

	return (str = "");
}

