#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds numbers
 * @argc: test
 * @argv: test
 * Return: 0
 **/

int main(int argc, char *argv[])
{
	int i = 0;
	int sum = 0;
	int j = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (isdigit(argv[i][j]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
