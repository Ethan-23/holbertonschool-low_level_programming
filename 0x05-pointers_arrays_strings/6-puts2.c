#include "holberton.h"

/**
 * puts2 - check the code for Holberton School students.
 * @str: input sting.
 * Return: Always 0.
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		if (*str == '\0')
			break;
		str++;
	}
	_putchar('\n');
}
