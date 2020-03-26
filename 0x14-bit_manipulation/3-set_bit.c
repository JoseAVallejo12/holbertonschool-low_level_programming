#include "holberton.h"

/**
 * set_bit - set bit in index givend
 * @n: pointer to var int
 * @index: index to set value
 * Return: new value inter
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int p = *n;

	/* find index position and OR operation betwin both */
	p = ((p | (1 << index)));
	*n = p;

	/* return new value get operation */
	return (p);
}
