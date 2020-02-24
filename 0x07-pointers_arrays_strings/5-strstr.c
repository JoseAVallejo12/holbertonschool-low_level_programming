#include "holberton.h"

/**
 *_strstr - find
 *@haystack: initial segment
 *@needle: prefix
 *Return: Always char
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*haystack == '\0' || *needle == '\0')
	{
		return ('\0');
	}

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
				return (haystack + j);
		}
	}

	return (0);
}

