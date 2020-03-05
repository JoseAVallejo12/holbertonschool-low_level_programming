#include "holberton.h"

/**
 *_calloc -allocated memoria for nmeb elemn de zise bytes
 *@nmemb: number of element in the array
 *@size: bytes for each position in the array
 *Return: pointer void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int n;

	if (nmemb == 0 && size == 0)
		return (NULL);

	p = (char *)malloc(nmemb * size + 1);
	if (p == NULL)
		return (NULL);

	for (n = 0; n < size; n++)
		*(p + n) = '0';

	return (p);

}
