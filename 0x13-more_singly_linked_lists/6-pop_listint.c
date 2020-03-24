#include "lists.h"

/**
 * pop_listint - Erase header node
 * @head: linked list
 * Return: data in node erased;
 */

int pop_listint(listint_t **head)
{

	listint_t *aux;
	int dato;

	if (*head == NULL)
		return (0);



	aux = *head;
	dato = aux->n;
	*head = aux->next;
	aux->n = '\0';
	free(aux);

	aux = NULL;

	return (dato);
}

