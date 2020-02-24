#include "holberton.h"

/**
 *_memcpy - copy n positions of b in *s
 *@dest: pointer dest
 *@src: array source
 *@n: Parameter unsigned
 *Return: Always string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *d, *s;

	d = dest;
	s = src;

	for (i = 0; i < n; i++)
		*(d + i) = *(s + i);

	return (d);
}
