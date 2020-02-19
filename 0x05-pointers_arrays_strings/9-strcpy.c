#include "holberton.h"

/**
 * _strcpy - Copie a string pointed
 * @dest: Destination
 * @src: Sender
 * Return: A char
 */

char *_strcpy(char *dest, char *src)
{
	int c;

	for (c = 0; src[c] != '\0'; c++)
		dest[c] = src[c];

	dest[c] = '\0';

	return (dest);
}
