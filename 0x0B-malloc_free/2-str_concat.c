#include "holberton.h"

/**
 *_strlen - giving to array
 *@s: pointer to array
 *Return: Always an int
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 *str_concat - back a pointer to array
 *@s1: Array one
 *@s2: Array two
 *Return: Always an array dinamic
 */

char *str_concat(char *s1, char *s2)
{
	char *arr;
	unsigned int i, j, size;

	if (s2 == 0)
		return (NULL);

	size = _strlen(s1) * _strlen(s2) + 1;

	arr = (char *)malloc(size * sizeof(char));

	if (arr == 0)
		return (NULL);


	for (i = 0; *(s1 + i) != '\0'; i++)
		*(arr + i) = *(s1 + i);

	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		*(arr + i) = *(s2 + j);
		i++;
	}
	*(arr + i) = 0;

	return (arr);
}
