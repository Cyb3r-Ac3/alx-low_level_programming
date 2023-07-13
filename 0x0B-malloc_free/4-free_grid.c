#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2-dimensional grid previously created by alloc_grid
 * @grid: The grid to free
 * @height: The height of the grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int b;

	for (b = 0; b < height; b++)
		free(grid[b]);

	free(grid);
}
