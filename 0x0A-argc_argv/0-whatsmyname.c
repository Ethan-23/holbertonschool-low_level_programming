#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints name of file
 * @argc: how many inputs
 * @argv: string of imputs
 * Return: 0
 **/
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
