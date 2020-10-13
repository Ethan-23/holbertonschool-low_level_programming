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

	ar = malloc(sizeof(str));
	if (ar == NULL)
		return (NULL);
	if (ar < str)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	ar[i] = str[i];
	return (ar);
}
