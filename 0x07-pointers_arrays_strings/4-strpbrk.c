#include "holberton.h"
#include <stdio.h>

/**
 * _strpbrk - check the code for Holberton School students.
 * @s: given string
 * @accept: accepted characters in string
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
	int count;

	for (;*s != '\0'; s++)
	{
		for (count = 0; accept[count] != '\0'; count++)
		{
			if (*s == accept[count])
				return(s);
		}
	}
	return (NULL);
}
