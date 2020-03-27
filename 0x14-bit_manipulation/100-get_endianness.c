#include "holberton.h"

/**
 * get_endianness - obtienen endianes
 *
 * Return: 1 if es lettle or 0 else not
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);
	else
		return (0);
}
