#include "lists.h"

/**
 * get_nodeint_at_index - found node in the list
 * @head: Linked lista
 * @index: index to find
 * Return: addres of node found
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/* pointer to found match with index value */
	unsigned int i = 0;

	/* if index is 0 return 0 */
	if (head == 0)
		return (0);

	while (head != NULL)
	{
		if (i == index)
			return (head);

		head = head->next;
		i++;
	}
	return (NULL);
}

