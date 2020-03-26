#include "holberton.h"

/**
 * get_bit - funtion return the binary number in the index
 * @n: number integer
 * @index: position of number binary to return
 * Return: binary number 1 or 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);

	return ((n & (1 << index)) != 0);
}

