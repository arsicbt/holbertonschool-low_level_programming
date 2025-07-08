#include <stdlib.h>

/**
**/
void free_grid(int **grid, int height)
{
	int h;

	if (grid == NULL)
	{
		return;
	}

	for (h = 0; h < height; h++)
	{
		free(grid[h]);
	}
	free(grid);
}
