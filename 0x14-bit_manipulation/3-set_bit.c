#include <stdio.h>
#include "holberton.h"

/**
 * set_bit - check the code for Holberton School students.
 * @n: given int
 * @index: given index
 * Return: Always 0.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n = *n | 1 << index;
	return (1);
}
