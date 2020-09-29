#include "holberton.h"
#include <stdio.h>

/**
 * print_array - check the code for Holberton School students.
 * @a: array num
 * @n: end num
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		printf("%d", a[t]);
		if (t < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
