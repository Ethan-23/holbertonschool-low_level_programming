#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - check the code for Holberton School students.
 * @n: test
 * Return: Always 0.
 */
void print_to_98(int n)
{
	for (; n <= 98; (n > 98 ? n-- : n++))
	{
		printf("%d, ", n);
	}
	printf("\n");
}
