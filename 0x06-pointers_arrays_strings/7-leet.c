#include "holberton.h"

/**
 * leet - encode each letter in number valor
 * @s: string
 * Return: string;
 */

char *leet(char *s)
{
	char letter[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char number[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letter[j] != '\0'; j++)
		{
			if (s[i] == letter[j])
			{
				s[i] = number[j];
				break;
			}

		}
	}
	return (s);
}

