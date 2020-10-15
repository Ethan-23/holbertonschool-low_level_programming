#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - prints buffer in hexa
 * @nmemb: the address of memory to print
 * @size: the size of the memory to print
 * Return: Nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *check;

	if (nmemb == 0 || size == 0)
		return (NULL);
	check = malloc(nmemb * size);
	if (check == NULL)
	{
		free(check);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		check[i] = 0;
	return (check);
}
