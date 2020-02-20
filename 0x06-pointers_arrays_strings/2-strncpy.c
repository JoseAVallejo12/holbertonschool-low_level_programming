#include "holberton.h"

/**
 **_strncat - funtion concatenate string
 *@*dest: Parameter in
 *@*src: Parameter to join
 *Return: String
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b, ab;

	a = 0;
	b = 0;
	ab = 0;
	while(dest[a] != '\0')
		a++;
	while(ab < n && src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
		ab++;
	}
	a++;
	dest[a] = '\0';
	return (dest);
}

