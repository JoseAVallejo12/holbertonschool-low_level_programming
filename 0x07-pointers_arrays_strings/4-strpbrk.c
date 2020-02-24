#include "holberton.h"

/**
 *_strpbrk - gets length of a prefix
 *@s: initial segment
 *@accept: prefix
 *Return: Always integer
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
				return (s + i);
		}
	}

	return (0);
}

