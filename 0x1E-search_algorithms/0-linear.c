#include "search_algos.h"
/**
 * linear_search - funtion for search linear in array
 * @array: array given to search linear
 * @size: lenght of the array
 * @value: data to search in array
 * Return: Always int vealue, if fail -1, else index
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;
	int val = 0;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		val = -1;
		printf("Value checked array[%d]\n", array[i]);
		if (array[i] == value)
		{
			val = i;
			break;
		}
	}
	return (val);
}
