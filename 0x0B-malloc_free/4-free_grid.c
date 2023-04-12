#include "main.h"
#include <stdlib.h>
/**
 * free_grid - function that frees a a 2 dimensional
 * grid previously created by alloc_grid
 * @grid: int pointing to grid
 * @height: height of grid
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);


	return (0);
}
