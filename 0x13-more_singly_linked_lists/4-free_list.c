#include "lists.h"

/**
 * free_list - free heap memori allocated
 * @head: header of the single listed linked
 * Return: Always voi
 **/

void free_list(list_t *head)
{
	list_t *nodes;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		nodes = head;
		head = head->next;
		free(nodes->str);
		free(nodes);
	}
}
