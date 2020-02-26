#include "holberton.h"

/**
 *_strlen_recursion - measure legenth of string
 *@s: string to print
 *Return: Always integer
 */

int _strlen_recursion(char *s)
{
	static int i;

	if (*s)
	{
		return (i + 1 + _strlen_recursion(s + 1));
	}

	return (0);
}

