#include "stdio.h"

/**
 * main - Displays all prime factors for a number.
 *
 * Return: Always 0.
 */
int main(void)
{
	long number = 612852475143;
	int divide = 2;

	while (number != divide)
	{

		while (number % divide != 0)
		{
			divide++;
		}
		if (number == divide)
		{
			break;
		}
		else
		{
			number = number / divide;
			divide = 2;
		}
	}
	printf("%ld\n", number);
	return (0);
}
