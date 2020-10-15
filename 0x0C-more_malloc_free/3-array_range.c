#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - prints buffer in hexa
 * @min: the address of memory to print
 * @max: the size of the memory to print
 * Return: Nothing.
 */
int *array_range(int min, int max)
{
	int *check;
	int total = max - min + 1;

	if (min > max)
		return (NULL);
	check = malloc(total * sizeof(int));
	if (check == NULL)
		return (NULL);
}
