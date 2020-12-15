#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - check the code for Holberton School students.
 * @haystack: given text
 * @needle: needed text
 * Return: Always 0.
 */

char *_strstr(char *haystack, char *needle)
{
	int length;
	int i;
	int j;

	for (length = 0; needle[length] != '\0'; length++)
	{
	}
	if (length < 1)
		return (haystack);
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (; haystack[i + j] == needle[j]; j++)
			{
			}
			if (needle[j] == '\0')
				return (haystack + i);
		}
	}
	return (NULL);
}
