#include <stdio.h>
/**
 * main - this will display 00 - 99 with commas and spaces
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int t;
	for (t = 48; t < 58; t++)
	{
		for (i = 48; i < 58; i++)
		{
			putchar(t);
			putchar(i);
			if (i <= 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
return (0);
}
