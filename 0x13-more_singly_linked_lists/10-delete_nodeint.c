#include "lists.h"

/**
 * list_size - funtion for length elemnt
 * @h: single list in
 * Return: number of elemt in the linked lis
 */

int list_size(listint_t **h)
{
	listint_t *aux;
	int i = 0;

	aux = *h;
	while (aux != NULL)
	{
		i++;
		aux = aux->next;
	}
	return (i);
}

/**
 * delete_nodeint_at_index - delete a node in the index possition
 * @head: linked list
 * @index: index, it start in 0
 * Return: 1 if it succeeded
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	unsigned int size_list = list_size(head);
	listint_t *aux = *head, *temp;

	/* validate if list is diferent of NULL */
	if (*head == NULL || index > size_list)
		return (-1);

	/* delete the fort position if index is 0 */
	if (index == 0)
	{
		*head = aux->next;
		free(aux);
		return (1);
	}
	/* travel the list find the index for delete node */
	while (aux != NULL)
	{
		if (i == (index - 1))
		{
			temp = aux->next;
			aux->next = temp->next;
			free(temp);
			temp = NULL;
			return (1);
		}
		aux = aux->next;
		i++;
	}
	return (-1);
}

