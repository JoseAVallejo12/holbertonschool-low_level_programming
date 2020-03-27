#include "holberton.h"

/**
 * print_binary - funtion to print print number bynary
 * @n: number integer
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i = 0;
	unsigned long int aux1;
	unsigned long int aux2 = n;

	/* if n is 0 0r 1 print */
	if (n < 2)
	{
		_putchar((n & 1) + '0');
		return;
	}
	/* count number of bit in the integer n */
	while (aux2 > 0)
	{
		aux2 = aux2 >> 1;
		i++;
	}

	while (i > 0)
	{
		i--;
		aux1 = n >> i;
	/* (aux1 & 1) is equal to (aux1 % 2) */
		_putchar((aux1 & 1) + '0');
	}
}
