#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>

/**
 * free_grid - frees a 2 dimensional grid
 *
 * Return: null
 * @grid: input
 * @height: input
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{  
		free(grid[a]);
	}
	free(grid);
}
