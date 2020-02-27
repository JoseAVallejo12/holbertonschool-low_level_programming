#include "holberton.h"

/**
 *len - givin legenth of the string
 *@s: string
 *Return: Always integer
 */

int len(char *s)
{
	if ((*s) == '\0')
		return (0);
	return (1 + len(s + 1));
}

/**
 *palindrome - checker if an string is palindrome
 *@s: string
 *@size: legenth of the string
 *Return: Always an integer
 */

int palindrome(char *s, int size)
{
	if (size <= 0)
		return (1);

	else if (*s == *(s + size))
		return (palindrome(s + 1, size - 2));

	return (0);
}

/**
 *is_palindrome - check palindrome world
 *@s: Array in
 *Return: Always integer
 *Descripcion: If s is palindrome return 1 else 0
 */

int is_palindrome(char *s)
{
	int size;

	if (*(s) == '\0')
		return (0);

	size = len(s);

	return (palindrome(s, size - 1));

}
