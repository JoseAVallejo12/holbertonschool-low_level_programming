#include"holberton.h"

/**
 *_isdigit - evaluate if c is an digit
 *@c: parameter
 *Return: 1 for integer number or 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

