#include "holberton.h"
/**
 * print_alphabet_x10 - will display alphabet 10x
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int a;
	int z;

	for (z = 1; z <= 10; z++)
	{
	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
_putchar('\n');
	}
}
