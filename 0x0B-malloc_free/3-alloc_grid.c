#include "holberton.h"

/**
 *alloc_grid - allocated
 *@width: width of the grid
 *@height: height of the grid
 *Return: Nothing.
 */

int **alloc_grid(int width, int height)
{
	int **arr2d, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr2d = (int **)malloc(height * sizeof(int *));
	if (arr2d == NULL)
		return (0);

	for (i = 0; i < height; i++)
	{
		arr2d[i] = malloc(width * sizeof(int *));
		if(arr2d[i] == NULL)
		{
			for (i = 1 - 1; i >= 0; i--)
				free(arr2d[i]);
			free(arr2d);
			return (0);
		}
	}

	for (i = 0; j < height; j++)
		arr2d[i][j] = 0; /* Each element set to 0 */

	return (arr2d);
}
