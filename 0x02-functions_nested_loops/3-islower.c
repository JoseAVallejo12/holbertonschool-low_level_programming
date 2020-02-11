#include"holberton.h"

/**
 *_islower - parametrer c
 *@c: parametrer
 *Return: 1 for lower case or 0 for otherwise
 */

int _islower(int c)
{
	int n;

	n = islower(c);
	if (n != 0)
	{
		n = 1;
	}

	return (n);
}

