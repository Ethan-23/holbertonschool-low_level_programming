#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - check the code for Holberton School students.
 * @ac: test
 * @av: test
 * Return: Always 0.
 */
char *argstostr(int ac, char **av)
{
	int ai = 0, wi = 0, len = 0;
	char *test;
	int i = 0;
	int j = 0;
	int k = 0;

	if (av == 0 || av == NULL)
		return (NULL);
	while (av[ai])
	{
		for (wi = 0; av[ai][wi]; wi++)
		{
			len++;
		}
		ai++;
	}
	len++;
	test = malloc(sizeof(char) * len);
	if (test == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[j] != '\0'; j++)
		{
		test[k] = av[i][j];
		k++;
		}
		test[k] = '\n';
		k++;
	}
	return (test);
}
