#include <stdio.h>
/**
 * main - displays alphabet backwords and lowercase
 *
 * Return: 0
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
