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
	listint_t *match;
	unsigned int i;

	/* if index is 0 return 0 */
	if (index == 0)
		return (0);

	/**
	 * find number of index only if is great than 0 and return
	 * addres of the node an index possition
	 */
	i = 0;
	while (head != NULL)
	{
		if (i == index)
		{
			match = head;
			return (match);
		}
		head = head->next;
		i++;
	}
	return (NULL);
}

