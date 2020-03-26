#include "holberton.h"

/**
 * get_bit - funtion return the binary number in the index
 * @n: number integer
 * @index: position of number binary to return
 * Return: binary number 1 or 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int aux1, i = 0;
	unsigned long int aux2 = n;
	
	while (aux2 > 0)
	{
		aux2 = aux2 >> 1;
		i++;
	}
	while (i > 0)
	{
		i--;
		aux1 = n >> i;
		if (i == index)
			return (aux1 & 1);
	}
	return (-1);
}

