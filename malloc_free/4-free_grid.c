#include "main.h"
#include <stdlib.h>
/**
 *free_grid - frees a 2 dimensional grid previously created
 *@grid: pointer
 *@height: height of grid
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
