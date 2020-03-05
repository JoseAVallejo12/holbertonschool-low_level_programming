#include "holberton.h"

/**
 *malloc_checked - allocated memory for pointer void
 * @d
 *
 * Return: int length of string
 */
void *malloc_checked(unsigned int b)
{
	void *p;
	p = malloc(b);
	if(p == NULL)
		exit(98);
	return (p);

}
