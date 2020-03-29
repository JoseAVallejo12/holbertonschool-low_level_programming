#include "lists.h"

/**
 * pop_listint - Erase header node
 * @head: linked list
 * Return: data in node erased;
 */

int pop_listint(listint_t **head)
{
	/* declare var for delete front node */
	listint_t *aux;
	int dato;

	/* if the list is empty return 0 */
	if (*head == NULL)
		return (0);

	/* safe position front node continue to nex and erase fron node */
	aux = *head;
	dato = aux->n;
	*head = aux->next;
	aux->n = '\0';
	free(aux);

	aux = NULL;

	return (dato);
}

