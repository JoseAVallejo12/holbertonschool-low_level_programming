#include "lists.h"
/**
 * insert_dnodeint_at_index - inset node in idx
 * @h: head linked list
 * @idx: index
 * @n: data to inset
 * Return: node address
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *node_prev, *node_next = *head, *tmp;

	if (index == 0)
	{
		*head = node_next->next;
		free(node_next);
		return (1);
	}

	while (node_next != NULL)
	{
		if (i == index && node_next->next == NULL)
		{
			node_prev->next = NULL;
			free(node_next);
			return (1);
		}

		if (i == index)
		{
			tmp = node_next;
			node_next = node_next->next;
			node_next->prev = node_prev;
			if (node_prev != NULL)
				node_prev->next = node_next;
			free(tmp);
			tmp = NULL;
			return (1);
		}
		node_prev = node_next;
		node_next = node_next->next;
		i++;
	}
	return (-1);
}
