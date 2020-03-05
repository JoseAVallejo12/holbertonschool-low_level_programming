#include "holberton.h"

/**
 *malloc_checked - allocated memory for pointer void
 *@b: size to allocate
 *Return: p
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	return (p);

}