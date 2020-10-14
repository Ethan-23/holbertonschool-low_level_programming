#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - check the code for Holberton School students.
 * @ac: test
 * @av: test
 * Return: Always 0.
 */
char *argstostr(int ac __attribute__((unused)), char **av)
{
	int ai = 1, wi, len = 0;
	char *test;
	int i;
	int j;
	int k;

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
