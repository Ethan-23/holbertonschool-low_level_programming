#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds numbers
 * @argc: test
 * @argv: test
 * Return: 0
 **/

int main(int argc, char *argv[])
{
	int i;
	int sum;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) < 1)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
