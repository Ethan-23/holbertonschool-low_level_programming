#include "holberton.h"

/**
 * print_line - prints the # of _ its told to print.
 * @n: number given to function
 * Return: Always 0.
 */
void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
