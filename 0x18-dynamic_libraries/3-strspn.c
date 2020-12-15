#include "holberton.h"
#include <stdio.h>

/**
 * _strspn - check the code for Holberton School students.
 * @s: given string
 * @accept: given character to match
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	int ac = 0;

	for (; *s != ' '; s++)
	{
		for (ac = 0; accept[ac] != '\0'; ac++)
		{
			if (*s == accept[ac])
				count++;
		}
	}
	return (count);
}
