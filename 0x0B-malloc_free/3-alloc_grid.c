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
	int i;
	int j;
	int b;

	if (width <= 0 || height <= 0)
		return (NULL);
	ar = malloc(height * sizeof(int *));
	if (ar == NULL)
		return (NULL);
	for (b = 0; b <= width; b++)
		ar[b] = (int *)malloc(width * sizeof(int *));
	for (i = 0; i <= height; i++)
		for (j = 0; j <= width; j++)
			ar[i][j] = 0;
	return (ar);
}
