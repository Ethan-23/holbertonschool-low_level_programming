#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "holberton.h"
/**
 *_realloc - bla
 *@ptr: thing
 *@old_size: bla
 *@new_size: bla
 *Return: bla
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i = 0;
	char *trash;
	char *ptr1 = ptr;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	if (new_size < old_size)
		old_size = new_size;
	trash = malloc(new_size);
	for (i = 0; i < old_size; i++)
		trash[i] = ptr1[i];
	free(ptr);
	return (trash);
}
