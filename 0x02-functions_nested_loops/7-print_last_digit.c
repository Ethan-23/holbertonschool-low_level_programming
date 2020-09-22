#include "holberton.h"

/**
 * print_last_digit - prints last digit.
 * @f: test
 * Return: Always 0.
 */

int print_last_digit(int f)
{
	int g;

	if (f < 0)
	{
		f = f * -1;
		g = f % 10;
		_putchar ('0' + g);
		return (g);
	}
	else
	{
		g = f % 10;
		_putchar ('0' + g);
		return (g);
	}
}
