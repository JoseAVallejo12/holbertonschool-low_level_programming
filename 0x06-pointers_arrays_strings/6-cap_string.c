#include "holberton.h"

/**
 * cap_string - capitalizes each letter
 * @s: string
 * Return: string;
 */

char *cap_string(char *s)
{
	char sep[] = {',', '.', ' ', '?', '(', '}', ')', '{', '!', '\t', ';', '\n'};
	int i, j, m;
	char aux;

	i = j = m = 0;

	while (s[i] != '\0')
	{
		j = 0;
		for (; sep[j] != '\0'; j++)
		{
			if (*(sep + j) == *(s + i))
				m = 1;
		}
		i++;
		if (m == 1 && *(s + i) >= 'a' && *(s + i) <= 'z')
		{
			aux  = *(s + i) - 32;
			*(s + i) = aux;
		}
		m = 0;
	}
	return (s);
}

