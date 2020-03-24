#include "lists.h"
/**
 * sum_listint - funtion for add all data int in the list
 * @head: single list in
 * Return: sum of the number of elemt in the linked lis
 */

int sum_listint(listint_t *head)
{
	/* var for return sum of the datos */
	int sum = 0;

	/* trave each node of the list and sum the datas */
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

