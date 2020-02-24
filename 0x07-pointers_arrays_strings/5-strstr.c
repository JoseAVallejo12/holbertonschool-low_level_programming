#include "holberton.h"

/**
 *_equal - find sames characters
 *@dest: initial segment
 *@src: prefix
 *Return: Always int
 */
int _equal(char *dest, char *src)
{
	int i;

	i = 0;

	while (*dest + i != '\0' && *src + i != '\0')
	{
		if (*dest != *src)
			return (0);
		dest++;
		src++;
	}

	return (*src == '\0');
}

/**
 *_strstr - find
 *@haystack: initial segment
 *@needle: prefix
 *Return: Always char
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if ((*haystack == *needle) && _equal(haystack, needle))
			return (haystack);
		haystack++;
	}

	return (0);
}
