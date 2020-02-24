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

	if (haystack == '\0')
		return ('\0');
	if (needle == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (*(haystack + i) == needle[j])
				i++;
			else
				break;
		}
		if (haystack[i-j] == *needle)
		{
			i -= j;
			return (haystack + i);
		}
	}

	return (0);
}

