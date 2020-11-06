#include <stdio.h>
#include "holberton.h"

/**
 * clear_bit - check the code for Holberton School students.
 * @n: given int
 * @index: given index
 * Return: Always 0.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n = (*n & ~1 << index) | (0 << index & 1 << index);
	return (1);
}
