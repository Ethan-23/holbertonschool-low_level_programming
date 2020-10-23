#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list given;
	double sum = 0.0;

	if (n == 0)
		return (0);
	va_start (given, n);
	for (i = 0; i < n; i++)
		sum += va_arg (given, int);
	va_end (given);
	return (sum);
}
