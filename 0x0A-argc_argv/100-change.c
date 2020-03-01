#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - funtion
 *@argc: legenth of argv
 *@argv: number of argummet
 *Return: Always 0
 */

int main(int argc, char *argv[])
{
	int n, value, chg, aux;
	int coins[] = {25, 10, 5, 2, 1};

	n = value = chg = aux = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	value = atoi(argv[1]);

	if (value <= 0)
	{
		printf("0\n");
		return (0);
	}

	for (n = 0; coins[n] != '\0'; n++)
	{
		if (value >= coins[n])
		{
			aux = (value / coins[n]);
			chg += aux;
			value -= coins[n] * aux;

		}
	}
	printf("%d\n", chg);
	return (0);
}

