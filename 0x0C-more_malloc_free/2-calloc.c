#include "holberton.h"

/**
 *_calloc -allocated memoria for nmeb elemn de zise bytes
 *@nmemb: number of element in the array
 *@size: bytes for each position in the array
 *Return: pointer void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	int n;

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	for (n = 0; n < size; n++)
		*(p + n) = 0;

	return (p);

}
