#include "main.h"

/**
  * free_grid -A function that frees a 2d grid
  * @grid: 2D grid to previously created
  * @height: columns size
  * Return: void
  */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);

}
