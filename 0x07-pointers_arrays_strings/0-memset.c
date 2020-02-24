#include "holberton.h"

/**
 *_memset - copy n positions of b in *s
 *@s: pointer dest
 *@b: array source
 *@n: parameters
 *Return: Always string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *dest, src;

	dest = s;
	src = b;

	for (i = 0; i < n; i++)
		*(dest + i) = src;

	return (dest);
}

