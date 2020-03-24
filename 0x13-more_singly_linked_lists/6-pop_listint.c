#include "lists.h"

/**
 * pop_listint - Erase header node
 * @head: linked list
 * Return: data in node erased;
 */

int pop_listint(listint_t **head)
{
	/**
	 *1 save dir of header
	 * 2 find the next node
	 * 3 erase node head
	 * 4 pointer to head to new frist node
	 */
	if (head == NULL)
		return (0);

	listint_t *aux;
	int dato;

	aux = *head;
	dato = aux->n;
	*head = aux->next;
	aux->n = '\0';
	free(aux);

	return (dato);
}

