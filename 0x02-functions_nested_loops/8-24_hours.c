#include "holberton.h"

/**
 * jack_bauer - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 48; a <= 50; a++)
		for (b = 48; b <= 57; b++)
			for (c = 48; c <= 53; c++)
				for (d = 48; d <= 57; d++)
				{
					if ((a <= '2' && b <= '3') || a < '2')
					{
						_putchar(a);
						_putchar(b);
						_putchar(':');
						_putchar(c);
						_putchar(d);
						_putchar('\n');
					}
					else
					{
						break;
					}
				}
}
