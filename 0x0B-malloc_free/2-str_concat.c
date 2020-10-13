#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * str_concat - cats 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	char *ar;
	unsigned int j;
	unsigned int i;

	ar = malloc(sizeof(s1) + sizeof(s2));
	if (ar == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		ar[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		ar[i] = s2[j];
		i++;
	}
	ar[i + 1] = '\0';
	return (ar);
}
