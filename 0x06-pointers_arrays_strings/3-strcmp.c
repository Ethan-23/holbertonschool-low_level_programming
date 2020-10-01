#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int count = 0;
	int val = 0;

	while (s1[count] != '\0')
	{
		if (s1[count] != s2[count])
		{
			val = s1[count] - s2[count];
			break;
		}
		else if (s1[count] == '\0')
		{
			val = 0;
		}
		count++;
	}
	return (val);
}
