#include "holberton.h"

/**
 *_strchr - find el character c en *s
 *@s: pointer dest string
 *@c: character to find
 *Return: Always string
 */

char *_strchr(char *s, char c)
{

	do	{
		if (*s == c)
			return (s);
	} while (*s++);

	return (0);
}

