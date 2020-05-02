#include "lists.h"
/**
 * insert_dnodeint_at_index - inset node in idx
 * @h: head linked list
 * @idx: index
 * @n: data to inset
 * Return: node address
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *t1, *t2 = *h, *new;
	/* add node in the front */
	if (idx == 0)
		return (add_dnodeint(h, n));
	/* add node in the index */
	while (t2->next != NULL)
	{
		if (i == idx)
		{
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);

			new->n = n;
			new->next = t2;
			new->prev = t1;
			t2->prev = new;
			t1->next = new;
			return (new);
		}
		t1 = t2;
		t2 = t2->next;
		i++;
	}
	/* and node in the end */
	if (i == idx)
		return (add_dnodeint_end(h, n));

	return (NULL);
}
