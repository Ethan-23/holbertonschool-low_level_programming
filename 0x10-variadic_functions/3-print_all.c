#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - check the code for Holberton School students.
 * @format: length
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0;
	int length;
	int test = 0;

	while (format[length] != '\0')
		length++;
	va_start(list, format);
	while (i < length)
	{
		test = 1;
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(list, int));
			break;
		case 'i':
			printf("%i", va_arg(list, int));
			break;
		case 'f':
			printf("%f", va_arg(list, double));
			break;
		case 's':
			if (list == NULL)
			{
				printf("(nill)");
				break;
			}
			printf("%s", va_arg(list, char *));
			break;
		default:
			test = 0;
			break;
		}
		if (test == 1 && i < length - 1)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(list);
}
