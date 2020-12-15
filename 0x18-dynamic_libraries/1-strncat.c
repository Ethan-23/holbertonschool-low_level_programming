#include "holberton.h"
#include <stdio.h>

/**
 * _strncat - check the code for Holberton School students.
 * @dest: Hello
 * @src: World!
 * @n: Number of char
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int count = 0;
	int count2 = 0;

	while (dest[count] != '\0')
		count++;
	while (count2 < n && src[count2] != '\0')
	{
		dest[count] = src[count2];
		count2++;
		count++;
	}
	dest[count] = '\0';
	return (dest);
}
