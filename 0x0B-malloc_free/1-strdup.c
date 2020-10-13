#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - thing
 * @str: test
 * Return: 0
 */
char *_strdup(char *str)
{
	char *ar;
	int i = 0;
	int count = 0;

	if (str == NULL)
		return (NULL);
	while (str[count] != '\0')
		count++;
	ar = malloc(count + 1);
	if (ar == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		ar[i] = str[i];
	ar[i] = '\0';
	return (ar);
}
