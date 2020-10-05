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
	int count = 0;
	int check = 0;

	for (; haystack != '\0'; haystack++)
	{
		count = 0;
		if (*haystack == needle[count])
		{
			for (; needle[count] != '\0'; count++)
			{
				if (*haystack == needle[count])
				{
					check++;
					haystack++;
				}
			}
			if (check == count)
			{
				while (check > 0)
				{
					haystack--;
					check--;
				}
				return (haystack);
			}
		}
	}
	return (NULL);
}
