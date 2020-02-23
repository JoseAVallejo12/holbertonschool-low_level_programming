#include "holberton.h"

/**
 * rot13 - encode each letter in ROT13
 * @s: string
 * Return: string;
 */

char *rot13(char *s)
{
	char *letter = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot_eq = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letter[j] != '\0'; j++)
		{
			if (s[i] == letter[j])
			{
				s[i] = rot_eq[j];
				break;
			}

		}
	}
	return (s);
}

