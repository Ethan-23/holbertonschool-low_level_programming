#include "holberton.h"
#include <stdio.h>

/**
 * leet - check the code for Holberton School students.
 * @a: input string
 * Return: Always 0.
 */
char *leet(char *a)
{
	char b[] = "aeotlAEOTL";
	char z[] = "4307143071";
	int rep = 0;
	int count = 0;

	while (a[count] != '\0')
	{
		rep = 0;
		while (b[rep] != '\0')
		{
			if (a[count] == b[rep])
				a[count] = z[rep];
			rep++;
		}
		count++;
	}
	return (a);
}
