#include "lists.h"

/**
 * free_listint2 - free heap memori allocated
 * @head: header of the single listed linked
 * Return: Always void
 **/

void free_listint2(listint_t **head)
{
	listint_t *nodes;
	listint_t *aux;

	if (*head == NULL)
		return;

	aux = *head;
	while (aux != NULL)
	{
		nodes = aux;
		nodes->n = 0;
		free(nodes);
		aux = aux->next;
	}
	free(aux);
	free(*head);
	*head = NULL;
}

