#include "lists.h"
/**
 * print_list - funtion for print single linked list
 * @h: single list in
 * @legent of the single list linked
 * Return: number of elemt in the linked lis
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
	printf("[%d]", h->len);
	if (h->str != NULL)
		printf(" %s\n", h->str);

	else
	    printf(" (nil)\n");

	h = h->next;

	i++;

	}

	return (i);
}

