#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - check the code for Holberton School students.
 * @separator: text given to separate
 * @n: given number on strings
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strings;

	va_start(strings, n);
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%s", va_arg(strings, char*));
			if (i < n - 1)
				printf("%s", separator);
		}
		printf("\n");
		va_end(strings);
	}
}
