#include "lists.h"
/**
 *
 *
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *t1, *t2 = *h, *new;

	while (h != NULL)
	{
/*		if (idx == 0)
			return (add_dnodeint(h, n));

		if (i == idx && t2->next == NULL)
			return (add_dnodeint_end(h, n));
*/
		if (i == idx)
		{
			new = malloc(sizeof(dlistint_t));
			if(new == NULL)
				return (NULL);
			new->n = n;
			new->next = t2;
			new->prev = t1;
			t2->prev = new;
			t1->next = new;
			return (*h);
		}
		t1 = t2;
		t2 = t2->next;
		i++;
	}
	return (NULL);
}
