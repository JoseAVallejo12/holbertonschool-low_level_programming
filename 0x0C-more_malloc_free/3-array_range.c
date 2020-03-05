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
	unsigned int n, i;

	if (min > max)
		return (NULL);

	n = 1 + ((unsigned int)max - min);

	printf("%d valor de n\n", n);

	p = malloc(sizeof(int) * n);
	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		p[i] = min;
		min++;
	}

	return (p);

}
