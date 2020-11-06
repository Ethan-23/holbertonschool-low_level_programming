#include <stdio.h>
#include "holberton.h"

/**
 * binary_to_uint - check the code for Holberton School students.
 * @b: Given string of chars
 * Return: Always 0.
 */

unsigned int binary_to_uint(const char *b)
{
	int count;
	int sum = 1;
	int start = 1;

	if (b == NULL)
		return (0);
	for (count = 0; b[count] != '\0'; count++)
	{
		if (b[count] != '1' && b[count] != '0')
			return (0);
	}
	for (; count > 0; count--, start *= 2)
	{
		if (b[count] == '1')
			sum += start;
	}
	return (sum);
}
