#include "lists.h"

/**
 * add_nodeint_end - add new node in the end
 * @head: - head of the single list linked
 * @n: - data to inicialice
 * Return: address new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *last_node = *head;

	new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	if (n == '\0')
		new_node->n = 0;
	else
		new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (last_node->next != NULL)
		last_node = last_node->next;

	last_node->next = new_node;

	return (new_node);

}

