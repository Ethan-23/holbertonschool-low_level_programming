#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - something
 * @str: something
 * Return: 0
 */
char *_strdup(char *str)
{
	char *ar;
	int i;
	int size;

	ar = malloc(sizeof(str));
	if (ar == NULL)
		return (NULL);
	size = sizeof(str)/sizeof(char);
	for (i = 0; i <= size; i++)
	ar[i] = str[i];
	return (ar);
}
