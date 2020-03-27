#include "holberton.h"

/**
 * print_binary - funtion to print print number bynary
 * @n: number integer
 * Return: void
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;
	unsigned long int result = 0, aux2 = 0, temp = 0;

	/* find diferencias en bit of the both numbers givend */
	temp = aux2 = n ^ m;
	
	/* count number of bit in the integer n */
	while (aux2 > 0)
	{
		aux2 = aux2 >> 1;
		i++;
	}

	/* convert aux2 to binary and count how much 1 have its */
	while (i > 0)
	{
		i--;
		aux2 = temp >> i;
	/* (aux1 & 1) is equal to (aux1 % 2) */
		if ((aux2 & 1) == 1)
			result += 1;
	}
	return (result);
}
