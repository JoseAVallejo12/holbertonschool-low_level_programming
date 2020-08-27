#include "search_algos.h"
/**
 * print_array - funtion for print array
 * @array: array to print in limit low and high
 * @limt_low: point to start print
 * @limt_high: point to stop the print value
 */
void print_array(int *array, int limt_low, int limt_high)
{
	char *s = ", ";
	int i = 0;

	printf("Searching in array: ");
	if (limt_low < limt_high)
	{
		for (i = limt_low; i <= limt_high; i++)
		{
			printf("%d", array[i]);
			if (i < limt_high)
				printf("%s", s);
		}
		printf("\n");
	}
}

/**
 * binary_search - funtion for binary search
 * @array: array to make search inside
 * @size: length if the array
 * @value: value to search in the array for binary search
 * Return: Always a int number
 */

int binary_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	int midle = high / 2;

	if (array == NULL)
		return (-1);

	while (low < high)
	{
		print_array(array, low, high);

		if (array[midle] == value)
			return (midle);

		else if (array[midle] < value)
			low = midle + 1;
		else
			high = midle - 1;
		midle = low + (high - low) / 2;
	}
	printf("Searching in array: %d\n", array[high]);
	return (-1);
}
