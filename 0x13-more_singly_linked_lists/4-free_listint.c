#include "lists.h"

/**
 * free_listint - free heap memori allocated
 * @head: header of the single listed linked
 * Return: Always void
 **/

void free_listint(listint_t *head)
{
	listint_t *nodes;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		nodes = head;
		head = head->next;
		nodes->n = '\0';
		free(nodes);
	}
}
