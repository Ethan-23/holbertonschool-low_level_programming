#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
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
