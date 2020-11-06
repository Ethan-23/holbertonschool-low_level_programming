#include <stdio.h>
#include "holberton.h"

/**
 * print_binary - check the code for Holberton School students.
 * @n: given number
 * Return: Always 0.
 */

void print_binary(unsigned long int n)
{
	int test = n, swit = 0, count = 0;

	if (test == 0)
		_putchar('0');
	for (count = 1; count * 2 <= test; count *= 2)
	{}
	for (; count >= 1; count /= 2)
		if (test - count >= 0)
		{
			test -= count;
			_putchar('1');
			swit = 1;
		}
		else
			if (swit == 1)
				_putchar('0');
}
