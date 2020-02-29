#include "holberton.h"
#include <stdio.h>

/**
 *_atoi - back int of the string
 *@s: Punter char
 *Return: integer number
 *Descripcion:
 *Write a function that convert a string to an integer.
 */

int _atoi(char *s)
{
	unsigned int n, num;
	int sig;

	n = 0;
	num = 0;
	sig = 1;

	while (s[n] != '\0')
	{
		if (s[n] == '-')
			sig *= -1;

		if (s[n] >= '0' && s[n] <= '9')
		{
			num = num * 10 + (s[n] - '0');
			if (s[n + 1] == ' ')
				break;
		}
		n++;
	}
	return (num * sig);
}

/**
 *main - funtion
 *@argc: legenth of argv
 *@argv: number of argummet
 *Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void) argc;
	if (*(argv + 1) == '\0' || *(argv + 2) == '\0')
		printf("Error\n");
	else
		printf("%d\n", _atoi(argv[1]) * _atoi(argv[2]));

	return (0);
}

