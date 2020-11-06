#include <stdio.h>
#include "holberton.h"

/**
 * get_bit - check the code for Holberton School students.
 * @n: given int
 * @index: given Index
 * Return: Always 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return((n >> index) & 1);
}
