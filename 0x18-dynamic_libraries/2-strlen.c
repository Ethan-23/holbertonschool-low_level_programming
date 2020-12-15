#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - check the code for Holberton School students.
 * @s: string length
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int count;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
