#include "holberton.h"
#include <stdio.h>

/**
 * _strcar - check the code for Holberton School students.
 * @dest: var
 * @src: var
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int count = 0;
	int count2 = 0;

	while (dest[count] != '\0')
		count++;
	while (src[count2] != '\0')
	{
		dest[count] = src[count2];
		count++;
		count2++;
	}
	return (dest);
}
