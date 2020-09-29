#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - check the code for Holberton School students.
 * @s: input string
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int c;
	int h = 0;
	int l = 0;

	while (*(s + h) != '\0')
	{
		h++;
	}
	while (h > l)
	{
		h--;
		c = s[l];
		s[l] = s[h];
		s[h] = c;
		l++;
	}
}
