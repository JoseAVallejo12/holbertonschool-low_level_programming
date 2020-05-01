#include "lists.h"
/**
 * print_list - funtion for print single linked list
 * @h: single list in
 * Return: number of elemt in the linked lis
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;

	}

	return (i);
}
