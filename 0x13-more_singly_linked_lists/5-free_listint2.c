#include "lists.h"
/**
 * free_listint2 -  free a list
 * @head: pointer
 * Return: void
 */

void free_listint2(listint_t **head)
{
	/* var tem for fre memory allocated */
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return;

	/* travel all linked list for free memory allocated */
	while ((*head)->next != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	free(*head);
	*head = NULL;
}

