#include "main.h"
#include <stdlib.h>

/**
*free_grid - frees 2D grid
*@grid: arg
*@height: arg
*Return: nothing
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	return (grid);
}
