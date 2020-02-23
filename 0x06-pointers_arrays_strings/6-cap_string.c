#include "holberton.h"
#include <stdio.h>

/**
 * cap_string - capitalizes each letter
 * @s: string
 * Return: string;
 */

char *cap_string(char *s)
{
	char separators[] = {',','.',' ','?','(','}',')','{','!','\t',';','\n'};
	int i, j, m;
	char *c, aux;

	i = j = m = 0;
	c = s;

	while (s[i] != '\0')
	{
		j = 0;
		while (separators[j] != '\0')
		{
			if (separators[j] == *(s + i))
				m = 1;

			j++;
		}
		i++;
		if (m == 1 && *(c + i) >= 'a' && *(c + i) <= 'z')
		{
			aux  = *(s + i) - 32;
			*(c + i) = aux;
		}
		m = 0;
	}
	return (c);
}

