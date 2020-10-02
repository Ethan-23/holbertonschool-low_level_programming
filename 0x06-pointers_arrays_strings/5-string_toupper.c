#include "holberton.h"
#include <stdio.h>

/**
 * string_toupper - check the code for Holberton School students.
 * @s: Input
 * Return: Always 0.
 */
char *string_toupper(char *s)
{
	int count;

	while (s[count] != '\0')
	{
		if (s[count] >= 97 && s[count] <= 122)
		{
			s[count] = s[count] - 32;
		}
		count++;
	}
	return (s);
}
