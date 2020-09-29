#include "holberton.h"

/**
 * print_rev - check the code for Holberton School students.
 * @s: input string
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int count;

	while (*s != '\0')
	{
		s++;
		count++;
	}
	while (count > 0)
	{
		count--;
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
