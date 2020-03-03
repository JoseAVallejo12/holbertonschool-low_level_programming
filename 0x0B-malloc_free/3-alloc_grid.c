#include "holberton.h"

/**
 *alloc_grid - allocated
 *@width: width of the grid
 *@height: height of the grid
 *Return: Nothing.
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	i = j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(height * sizeof(int *));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int *));
		if (arr[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
			{
				free(arr[i]);
			}
			free(arr);
			return (NULL);
		}
	}

	for (i = 0; j < width; j++)
		arr[i][j] = 0; /* Each element set to 0 */

	return (arr);
}
