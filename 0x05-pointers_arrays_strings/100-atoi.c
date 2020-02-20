#include "holberton.h"
#include <stdio.h>
/**
 *_atoi - back int of the string
 *@s: Punter char
 *Return: integer number
 */

int _atoi(char *s)
{
	int n, num, sig;

	n = 0;
	num = 0;
	sig = 1;

	while (s[n] != '\0')
	{
		if(s[n] >= '0' && s[n] <= '9')
			num = num * 10 + s[n] - '0';

		if (s[n] == '-')
			printf("%d ",sig *= -1);
		if (num != 0 && (s[n + 1] >= '0' && s[n + 1] <= '9'))
			;
		n++;
	}

	return (num * sig);
}
