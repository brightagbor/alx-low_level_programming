#include <stdlib.h>

/**
 * free_grid - frees 2 dimensional grid previously created by alloc_grid
 * @grid: Pointer to pointer of type int
 * @height: Variable
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
