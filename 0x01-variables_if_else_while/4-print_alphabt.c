#include <stdio.h>
/**
 * main - This will display the alphabet but leave out e and q
 *
 * Return: 0
 */
int main(void)
{
	char i;

		for (i = 'a'; i <= 'z'; i++)
		{
			if((i == 'e') || (i == 'q'))
			{
				i = i + 1;
			}
			putchar(i);
		}
		putchar('\n');
	return (0);
}
