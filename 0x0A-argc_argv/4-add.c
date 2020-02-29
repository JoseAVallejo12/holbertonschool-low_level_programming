#include "holberton.h"
#include <stdio.h>

/**
 *_atoi - back int of the string the only numbers
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
		if (s[n] < '0' || s[n] > '9')
		{
			num = 0;
			break;
		}
		num = num * 10 + (s[n] - '0');
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
	int n, num, sum;

	(void) argc;

	num = sum = 0;

	for (n = 1; *(argv + n) != '\0'; n++)
	{
		num = _atoi(argv[n]);
		if ((num  == 0))
		{
			printf("Error\n");
			return (0);
		}
		else
			sum += num;
	}
	printf("%d\n", sum);

	return (0);
}

