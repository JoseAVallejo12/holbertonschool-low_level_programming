#include "holberton.h"

/**
 * cap_string - capitalizes each letter
 * @s: string
 * Return: string;
 */

char *cap_string(char *s)
{
	char sep[12] = {' ', '.', ',', '?', '(', '}', ')', '{', '!', '\t', ';', '\n'};
	int i, j, m;

	i = m = 0;

	while (s[i] != '\0')
	{
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (*(sep + j) == *(s + i))
			{
				m = 1;
				break;
			}
		}
		if (i == 0 && *(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i)  = *(s + i) - 32;

		i++;
		if (m == 1 && *(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i)  = *(s + i) - 32;

		m = 0;
	}
	return (s);
}

