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
	int n, num, sig;

	n = 0;
	num = 0;
	sig = 1;

	while (s[n] != '\0')
	{
		if (s[n] == '-')
			sig *= -1;

		if (s[n] >= '0' && s[n] <= '9')
		{
			num = num * 10 + s[n] - '0';
			if (s[n + 1] < '0' || s[n + 1] > '9')
				break;
		}
		n++;
	}
	if(num > 0)
		return (num * sig);

	return (0);
}

