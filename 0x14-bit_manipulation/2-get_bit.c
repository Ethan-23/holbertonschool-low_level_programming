#include <stdio.h>
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return((n >> index) & 1);
}
