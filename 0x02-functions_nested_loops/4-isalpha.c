#include<ctype.h>
#include"holberton.h"

/**
 *_isalpha - parametrer c
 *@c: parametrer
 *Return: 1 for lower case or 0 for otherwise
 */

int _isalpha(int c)
{
	int n;

	n = isalpha(c);
	if (n != 0)
	{
		n = 1;
	}

	return (n);
}

