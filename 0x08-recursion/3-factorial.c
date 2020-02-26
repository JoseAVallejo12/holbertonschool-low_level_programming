#include "holberton.h"

/**
 *factorial -facnorial of number n
 *@n: number
 *Return: Always integer
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));

}

