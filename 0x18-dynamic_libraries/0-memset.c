#include "holberton.h"
#include <stdio.h>

/**
 * _memset - prints buffer in hexa
 * @b: the address of memory to print
 * @s: the size of the memory to print
 * @n: number
 * Return: Nothing.
 */

char *_memset(char *s, char b, unsigned int n)
{
	for (; n > 0; n--)
		s[n - 1] = b;
		return (s);
}
