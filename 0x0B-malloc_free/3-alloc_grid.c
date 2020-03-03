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

	for (i = 0; i < height; i++)
	{
		arr2d[i] = malloc(width * sizeof(int *));
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr2d[i][j] = 0; /* Each element set to 0 */
		}

	}

	return (arr2d);
}
