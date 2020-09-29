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
	for (n = 0; n < 5; n++)
	{
		printf("%d", a[n]);
		if (n < 4)
		{
			printf(", ");
		}
	}
	printf("\n");
}
