#include "holberton.h"

/**
 *_strcpy - Copie a string pointed
 *@dest: Destination
 *@src: Sender
 *Return: A char
 */i

char *_strcpy(char *dest, char *src)
{
	int n;

	n = 0;

	while (src[n] != '\0')
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';

	return (dest);
}

