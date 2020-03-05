#include "holberton.h"

/**
 *array_range - create an array the integer
 *@min: value for fill array
 *@max: bytes for each position in the array
 *Return: pointer array
 */
int *array_range(int min, int max)
{
	int *p;
	unsigned int n;
	int i, j;

	j = 0;

	if (min > max)
		return (NULL);

	n = (unsigned int)max - min;

	p = malloc(sizeof(int) * n + 1);
	if (p == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		*(p + j) = i;
		j++;
	}

	*(p + j) = '\0';

	return (p);

}
