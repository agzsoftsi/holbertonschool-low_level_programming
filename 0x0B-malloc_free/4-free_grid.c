#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid previously created by
 * your alloc_grid function
 * @grid: array
 * @height: height of array
 */
void free_grid(int **grid, int height)
{
	int con;

	for (con = 0; con < height; con++)
		free(grid[con]);
	free(grid);
}
