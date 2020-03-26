#include "holberton.h"

/**
 * set_bit - set bit in index givend
 * @n: pointer to var int
 * @index: index to set value
 * Return: 1 if worked or -1 if failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int p = *n;

	if (index > 64)
		return (-1);

	/* find index position and OR operation betwin both */
	p = ((p | (1 << index)));
	*n = p;
	/* return new value get operation */
	return (1);

}
