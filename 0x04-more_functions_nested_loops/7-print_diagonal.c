#include "holberton.h"

/**
 * print_diagonal - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int a;
	int b = 0;
	int c;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
		{
			for (c = n + 1; c <= n + b; c++)
				_putchar(' ');
		_putchar('\\');
		_putchar('\n');
		b = b + 1;
		}
	}
	_putchar('\n');
}
