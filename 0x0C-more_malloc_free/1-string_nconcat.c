#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - check the code for Holberton School students.
 * @s1: Given string 1
 * @s2: Given string 2
 * @n: Given length of string 2
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ar;
	unsigned int j;
	unsigned int i;
	int size1 = 0;
	unsigned int size2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[size1] != '\0')
		size1++;
	while (s2[size2] != '\0' && size2 < n)
		size2++;
	ar = malloc(size1 + size2 + 1);
	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		ar[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0' && j < n; j++)
	{
		ar[i] = s2[j];
		i++;
	}
	ar[i] = '\0';
	return (ar);
}
