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
	int len = 0;
	char *test;
	int i = 0;
	int j = 0;
	int k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
		i++;
	}
	len++;
	test = malloc(sizeof(char) * (len + ac));
	if (test == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
		test[k] = av[i][j];
		k++;
		}
		test[k] = '\n';
		k++;
	}
	test[k] = '\0';
	return (test);
}
