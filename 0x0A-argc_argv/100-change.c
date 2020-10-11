#include <stdio.h>
#include <stdlib.h>
/**
 * main - counts coins
 * @argc: test
 * @argv: test
 * Return: 0
 **/
int main(int argc __attribute__((unused)), char *argv[])
{
	int i = 0;
	int coin = 0;
	int check[] = {25, 10, 5, 1};
	int count = 0;

	if (argc > 2 || argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	count = atoi(argv[1]);
	if (count < 0)
	{
		printf("0\n");
		return (0);
	}
	while (count != 0)
	{
		if (count >= check[i])
		{
			coin++;
			count -= check[i];
		}
		else
			i++;
	}
	printf("%d\n", coin);
	return (0);
}
