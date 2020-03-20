#include "lists.h"

/**
 * free_list - free heap memori allocated
 * @head: header of the single listed linked
 * Return: Always voi
 **/

void free_list(list_t *head)
{
	list_t *nodes = NULL;

	while ((nodes == head) != NULL)
	{
		head = head->next;
		free(nodes->str);
		free(nodes);
	}
}
