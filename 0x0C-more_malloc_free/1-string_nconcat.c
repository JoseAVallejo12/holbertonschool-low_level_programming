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
 *string_nconcat - concatena two strin in new allocate memory
 *@s1: Array one
 *@s2: Array two
 *@n: number the byte to copy the s2 to s1
 *Return: Always an array dinamic
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	unsigned int i, j, k, size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n >= (unsigned int)_strlen(s2))
		j = (unsigned int)_strlen(s2);
	else
		j = n;

	size = (unsigned int)_strlen(s1) + j + 1;

	arr = (char *)malloc(size * sizeof(char));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (i = 0; *(s1 + i) != '\0'; i++)
		*(arr + i) = *(s1 + i);

	for (k = 0; k < j; k++)
	{
		*(arr + i) = *(s2 + k);
		i++;
	}
	*(arr + i) = '\0';

	return (arr);
}
