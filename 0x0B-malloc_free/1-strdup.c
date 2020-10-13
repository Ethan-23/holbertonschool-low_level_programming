#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - something
 * @str: something
 * Return: 0
 */
int str_leng(char *a)
{
	int i;
	for (i = 0; a[i] != '\0'; i++)
	{

	}
	return (i);
}
char *_strdup(char *str)
{
	char *ar;
	int i;
	int add = str_leng(str);

	if (str == NULL)
		return (NULL);
	ar = malloc(sizeof(add) * sizeof(char));
	if (ar == 0)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		ar[i] = str[i];
	return (ar);
}
