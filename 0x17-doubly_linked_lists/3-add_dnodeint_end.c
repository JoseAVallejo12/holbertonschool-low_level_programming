#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: head of node.
 * @n: data to be added.
 * Return: Head of the dlistint_t.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *aux = *head;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new;
		new->n = n;
		new->prev = NULL;
		new->next = NULL;
		return (*head);
	}
	else
	{
		while (aux->next != NULL)
			aux = aux->next;
	}
	aux->next = new;
	new->n = n;
	new->prev = aux;
	new->next = NULL;
	return (*head);
}
