#include "holberton.h"
#include <stdio.h>

/**
 * cap_string - check the code for Holberton School students.
 * @a: input string
 * Return: Always 0.
 */
char *cap_string(char *a)
{
	int test = 0;
	int count = 0;
	char *t = " \t\n,;.!?\"(){}";

	if (a[0] >= 'a' && a[0] <= 'z')
		a[0] -= 32;
		while (a[count] != '\0')
		{
			test = 0;
			while (t[test] != '\0')
			{
				if (a[count - 1] == t[test] && a[count] >= 'a' && a[count] <= 'z')
				{
					a[count] -= 32;
				}
				test++;
			}
			count++;
		}
	return (a);
}
