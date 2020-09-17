#include <stdio.h>
/**
 * main - prints numbers with , between them
 *
 * Return: 0
 */
int main(void)
{
	char i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	       putchar('\n');
	return (0);
}
