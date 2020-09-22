#include "holberton.h"

/**
 * print_last_digit - prints last digit.
 * @f: test
 * Return: Always 0.
 */

int print_last_digit(int f)
{
	int g;

	g = f % 10;
	if (g < 0)
	{
		g = g * -1;
	}
	_putchar('0' + g);
	return (g);
}
