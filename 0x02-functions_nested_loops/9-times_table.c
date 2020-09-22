#include "holberton.h"

/**
 * times_table - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int number;
	int mult;

	for (number = 0; number <= 9; number++)
	{
		for (mult = 0; mult <= 9; mult++)
		{
			if ((number * mult) <= 9)
			{
				if (mult > 0)
				{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				}
				_putchar('0' + mult * number);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(mult * number / 10 + '0');
				_putchar(mult * number % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
