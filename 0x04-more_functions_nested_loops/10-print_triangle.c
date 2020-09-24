#include "holberton.h"

/**
 * print_triangle - Prints a triangle with a given size
 * @size: input var
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int a;
	int c;
	int z;
	int x = 0;
	int b = 0;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (c = 2; c <= size - b; c++)
			{
				_putchar(' ');
			}
				for (z = size; z <= size + x; z++)
				{
				_putchar('#');
				}
				_putchar('\n');
				b = b + 1;
				x = x + 1;
			}
	}
	else
	{
		_putchar('\n');
	}
}
