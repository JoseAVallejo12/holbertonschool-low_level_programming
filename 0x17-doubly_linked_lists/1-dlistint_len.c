#include "lists.h"
/**
 * dlistint_len - funtion for measure length single linked list
 * @h: single list in
 * Return: number of elemt in the linked lis
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;

	}

	return (i);
}
