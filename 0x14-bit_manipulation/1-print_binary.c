#include <stdio.h>
#include "holberton.h"

/**
 * print_binary - check the code for Holberton School students.
 * @n: given number
 * Return: Always 0.
 */

void print_binary(unsigned long int n)
{
	unsigned long int num = n;

	if (num == 1)
	{
		_putchar(1 + '0');
		return;
	}
	if (num > 1)
		print_binary(num >> 1);
		_putchar((num & 1) + '0');
}
