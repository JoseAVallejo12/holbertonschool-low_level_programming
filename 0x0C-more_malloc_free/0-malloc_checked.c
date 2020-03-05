#include "holberton.h"

/**
 *malloc_checked - allocated memory for pointer void
 *@b: size to allocate
 *Return: p
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);

}
