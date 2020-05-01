#include "lists.h"
/**
 * get_dnodeint_at_index - funtion for get node in index position
 * @head: single list in
 * @index: index position
 * Return: address of node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);

		head = head->next;
		i++;
	}
	return (NULL);
}
