#include <stdlib.h>
#include <stdio.h>
/**
 * str_leng - something
 * @a: something
 * Return: 0
 */
int str_leng(char *a)
{
	int i = 0;

	for (i = 0; a[i] != '\0'; i++)
	{

	}
	return (i);
}
/**
 * _strdup - thing
 * @str: test
 * Return: 0
 */
char *_strdup(char *str)
{
	char *ar;
	int i = 0;
	int add = str_leng(str);

	if (str == NULL)
		return (NULL);
	ar = malloc(1 + add * sizeof(char));
	if (ar == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		ar[i] = str[i];
	ar[i] = '\0';
	return (ar);
}
