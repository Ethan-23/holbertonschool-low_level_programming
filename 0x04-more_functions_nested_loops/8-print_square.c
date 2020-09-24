#include "holberton.h"

/**
 * print_square - check the code for Holberton School students.
 * @size: number input for size
 * Return: Always 0.
 */
void print_square(int size)
{
	int a;
	int b;

	for (a = 1; a <= size; a++)
	{
		_putchar('#');
		for (b = 2; b <= size; b++)
			_putchar('#');
		_putchar('\n');
	}
}
