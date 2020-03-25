#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 * @head: syngle list linked
 * Return: Head pointer to last position in the list
 */

listint_t *reverse_listint(listint_t **head)
{
	/* declare and inicialice twos var */
	listint_t *preview = NULL, *next = *head;

	/* validata if list be not empty */
	if (*head == NULL)
		return (NULL);

	/* continue make that pointer next pointer to preview */

	while (next != NULL)
	{
		next = (*head)->next;
		(*head)->next = preview;
		preview = *head;
		if (next != NULL)
			*head = next;
	}
	preview = NULL;
	return (*head);
}
