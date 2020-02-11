#include"holberton.h"

/**
 *_abs - parametrer c
 *@n: parametrer
 *Return: 1 for lower case or 0 for otherwise
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
