#include "lists.h"

/**
 * add_nodeint - add new node in the front
 * @head: - head of the single list linked
 * @n: - data to inicialice
 * Return: address new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	else if (n == '\0')
		new_node->n = 0;
	else
		new_node->n = n;

	new_node->next = *head;
	*head = new_node;

	return (new_node);

}

