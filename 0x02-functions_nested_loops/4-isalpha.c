#include"holberton.h"

/**
 *_isalpha - parametrer c
 *@c: parametrer
 *Return: 1 for lower case or 0 for otherwise
 */

int _isalpha(int c)
{
	int n;

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		n = 1;
	}
	else
	{
		n = 0;
	}

	return (n);
}

