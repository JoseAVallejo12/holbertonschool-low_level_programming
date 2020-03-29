#include "lists.h"

/**
 * free_listint2 - free heap memori allocated
 * @head: header of the single listed linked
 * Return: Always void
 **/

void free_listint2(listint_t **head)
{
	listint_t *nodes = NULL;
	listint_t *aux = NULL;

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
	aux = NULL;
	nodes = NULL;
	free(aux);
	*head = NULL;
}

