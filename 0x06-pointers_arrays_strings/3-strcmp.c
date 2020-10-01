#include "holberton.h"
#include <stdio.h>

/**
 * _strcmp - check the code for Holberton School students.
 * @s1: string 1
 * @s2: string 2
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
