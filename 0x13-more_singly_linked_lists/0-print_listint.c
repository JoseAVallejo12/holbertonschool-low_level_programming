#include "lists.h"
/**
 * print_listint - funtion for print single linked list
 * @h: single list in
 * @legent of the single list linked
 * Return: number of elemt in the linked lis
 */

size_t print_listint(const listint_t *h)
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

