#include "lists.h"
#include <string.h>

/**
 * add_node - add new node in the front
 * @head: - head of the single list linked
 * @str: - data to inicialice
 * Return: address new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	else
	{
		new_node->str = strdup(str);
		new_node->len = (unsigned int)strlen(str);
		new_node->next = *head;
		*head = new_node;

	return (new_node);

	}
}

