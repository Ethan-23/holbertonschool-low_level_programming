#include "holberton.h"

/**
 * puts_half - check the code for Holberton School students.
 * @str: string given
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int count;
	int count2;

	while (*str != '\0')
	{
		count++;
		str++;
	}
	if (count % 2 == 0)
		count2 = count / 2;
	else
		count2 = (count - 1) / 2;
	while (count2 != 0)
	{
		count2--;
		str--;
	}
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
