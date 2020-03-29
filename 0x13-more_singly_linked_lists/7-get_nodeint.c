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

	/* if head is empty return 0 */
	if (head == 0)
		return (0);

	/* travel the list find match betwin index and i var, if no return NULL */
	while (head != NULL)
	{
		if (i == index)
			return (head);

		head = head->next;
		i++;
	}
	return (NULL);
}

