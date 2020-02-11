#include"holberton.h"

/**
 *_islower - parametrer c
 *@c: parametrer
 *Return: 1 for lower case or 0 for otherwise
 */

int _islower(int c)
{
	int n;

	if (c >= 97 && c <= 122)
	{
		n = 1;
	}
	else
	{
		n = 0;
	}

	return (n);
}

