#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * alloc_grid - makes a grid
 * @width: width
 * @height: height
 * Return: 0
 */
int **alloc_grid(int width, int height)
{
	int **ar;
	int j;
	int b;

	if (width <= 0 || height <= 0)
		return (NULL);
	ar = malloc(height/16);
	if (ar == NULL)
		return (NULL);
	for (b = 0; b < height; b++)
	{
		ar[b] = malloc(width/16);
		for (j = 0; j < width; j++)
			ar[b][j] = 0;
	}
	return (ar);
}
