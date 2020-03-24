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
	i--;
	return (i);
}

/**
 * insert_nodeint_at_index - insert new node in the index possition
 * @head: linked list
 * @idx: index, it start in 0
 * @n: data for new node
 * Return: Always addres new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	unsigned int size_list = list_size(head);
	listint_t *aux = *head;
	listint_t *new_node;

	/* validate if list is diferent of NULL */
	if (head == NULL)
		return (NULL);

	/* create new node of the size the listint_t */
	new_node = (listint_t *)malloc(sizeof(listint_t));

	/* validate if the size of list and new_node is ok */
	if (new_node == NULL || idx > size_list)
		return (NULL);

	if (idx == 0)
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
	}

	while (aux != NULL)
	{
		if (i == (idx - 1))
		{
			new_node->next = aux->next;
			new_node->n = n;
			aux->next = new_node;
			return (new_node);
		}
		aux = aux->next;
		i++;
	}
	return (NULL);
}

