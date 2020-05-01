#include "lists.h"
 /**
  *
  *
  */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux = NULL;
	if (head != NULL)
	{
		while (head != NULL)
		{
			aux = head;
			head = (head)->next;
			free(aux);
		}
		head = NULL;
		aux = NULL;
	}
}

