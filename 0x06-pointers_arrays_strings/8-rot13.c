#include "holberton.h"
#include <stdio.h>

/**
 * rot13 - check the code for Holberton School students.
 * @a: input string
 * Return: Always 0.
 */
char *rot13(char *a)
{
	char start[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char after[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int count = 0;
	int sc = 0;

	while (a[count] != '\0')
	{
		sc = 0;
		while (start[sc] != '\0')
		{
			if (a[count] == start[sc])
			{
				a[count] = after[sc];
				break;
			}
			sc++;
		}
		count++;
	}
	return (a);
}
