#include "lists.h"

/**
 *_strlen - giving to array
 *@s: pointer to array
 *Return: Always an int
 */

int _strlen(const char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen(s + 1));
}

/**
 * add_node_end - add new node in the end
 * @head: - head of the single list linked
 * @str: - data to inicialice
 * Return: address new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last_node = *head;

	new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL || str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = _strlen(str);

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

