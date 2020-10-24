#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - check the code for Holberton School students.
 * @separator: seperator string
 * @n: Number of numbers
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list num;

	va_start(num, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(num, int));
			if (i < n - 1)
				if (separator != NULL)
				printf("%s", separator);
		}
		va_end(num);
	printf("\n");
}
