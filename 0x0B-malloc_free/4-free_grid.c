#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * free_grid - free the grid
 * @grid: thing
 * @height: thing
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
