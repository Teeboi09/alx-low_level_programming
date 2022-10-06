#include "main.h"
#include <stdlib.h>

/**
 * free_grid - code
 * @grid: code
 * @height: code
 * Return: code
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		return;
	while (i < height)
		free((int *)grid[i++]);
	free(grid);
}
