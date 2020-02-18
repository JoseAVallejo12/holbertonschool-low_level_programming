#include "holberton.h"

/**
 *_strlen - check the code for Holberton School students.
 *@s: Parameter
 *
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int n;

	n = 0;
	while (s[n] != '\0')
		n++;

	return (n);

}

