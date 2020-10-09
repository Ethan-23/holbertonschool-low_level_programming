#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 *
 *
 **/
int main(int argc __attribute__((unused)), char *argv[])
{
	int i = 0;
	int coin = 0;
	int count = atoi(argv[1]);
	int check[] = {25, 10, 5, 1};
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
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
