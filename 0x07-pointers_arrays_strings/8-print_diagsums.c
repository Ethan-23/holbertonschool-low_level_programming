#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - check the code for Holberton School students.
 * @a: test
 * @size: test
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int fsize = size * size;
	int i;
	int j;
	int sum;
	int sum2;

	for (i = 0; i < fsize; i += size + 1)
		sum += a[i];
	for (j = size * (size - 1); j > 0; j -= size - 1)
		sum2 += a[j];
	printf("%d, %d\n", sum, sum2);
}
