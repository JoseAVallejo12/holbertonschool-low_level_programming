#include "lists.h"

/**
 * add_dnodeint - add node front list
 * @head: head of the linked list
 * @n: data to save in new node
 * Return: new node address
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *aux = *(head);

	if (head == NULL)
		return (NULL);

	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	*(head) = new;
	new->n = n;
	new->prev = NULL;
	if (aux == NULL)
		new->next = NULL;
	else
	{
		new->next = aux;
		aux->prev = *(head);
		aux = NULL;
	}

	return (*head);
}

