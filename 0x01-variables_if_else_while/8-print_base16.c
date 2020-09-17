#include <stdio.h>
/**
 * main - displays 0-9 then a-f
 *
 * Return: 0
 */
int main(void)
{
	char i;

	for (i = 48; i < 58; i++)
		putchar(i);
	for (i = 'a'; i < 'g'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
