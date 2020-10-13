#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * str_concat - cats 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0
 */
int str_length(char *x)
{
        int i;
        for (i = 0; x[i] != '\0'; i++)
        {

        }
	return (i + 1);
}
char *str_concat(char *s1, char *s2)
{
	char *ar;
	unsigned int j;
	unsigned int i;
	int size1 = str_length(s1);
	int size2 = str_length(s2);

	ar = malloc(sizeof(size1) + sizeof(size2) + sizeof(char));
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
	return (ar);
}
