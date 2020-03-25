#include "lists.h"
/**
 * print_listint_safe - funtion for print single linked list
 * @head: single list in
 * @legent of the single list linked and print datas
 * Return: number of elemt in the linked lis
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *aux = head, *temp = NULL;
	size_t i = 0;

	if (head == NULL)
		return (0);

	while (aux != NULL)
	{
		temp = aux;
		printf("[%p] %d\n", (void *)aux, aux->n);
		aux = aux->next;
		i++;

		if (temp < aux)
		{
			printf("-> [%p] %d\n", (void *)aux, aux->n);
			break;
		}

	}
	return (i);
}

