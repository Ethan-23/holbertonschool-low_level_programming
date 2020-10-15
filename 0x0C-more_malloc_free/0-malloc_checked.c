#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - check the code for Holberton School students.
 * @b: input
 * Return: Always 0.
 */

void *malloc_checked(unsigned int b)
{
	int *test;

	test = malloc(b);
	if (test == NULL)
	{
		free(test);
		exit (98);
	}
	return (test);
}
