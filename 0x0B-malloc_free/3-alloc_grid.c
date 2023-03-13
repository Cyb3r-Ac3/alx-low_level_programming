#include "mai.h"
#include <stdlib.h>

/**
 * alloc_grid - allocate a 2D array of integers
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: a pointer to the newly allocated 2D array, or NULL
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int k, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (k = 0; k < height; k++)
	{
		grid[k] = malloc(width * sizeof(int));
		if (grid[k] == NULL)
		{
			/* free previously allocated memory */
			for (j = 0; j < k; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}
	}

	/* initialize elements of the grid to zero */
	for (k = 0; k < height; k++)
	{
		for (j = 0; j < width; j++)
			grid[k][j] = 0;
	}

	return (grid);
}
