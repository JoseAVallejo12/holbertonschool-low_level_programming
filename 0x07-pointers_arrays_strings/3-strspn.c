#include "holberton.h"

/**
 *_strspn - gets length of a prefix
 *@s: initial segment
 *@accept: prefix
 *Return: Always integer
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}

