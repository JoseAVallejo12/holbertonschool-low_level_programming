#include "lists.h"
/**
 * listint_len - funtion for length elemnt
 * @h: single list in
 * @length number of element an single list linked
 * Return: number of elemt in the linked lis
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}

