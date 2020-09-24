#include "holberton.h"
/**
 * print_mosst_numbers - prints 0 - 9 but skips 2 and 4
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int a = '0';

	for (a = '0'; a <= '9'; a++)
	{
		if (a != '2' && a != '4')
		{
			_putchar(a);
		}
	}
	_putchar('\n');
}
