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

	else if (str == NULL)
	{
		new_node->str = NULL;
		new_node->len = 0;
	}
	else
	{
		new_node->str = strdup(str);
		new_node->len = _strlen(str);
	}

	new_node->next = *head;
	*head = new_node;

	return (new_node);

}

