#include "holberton.h"
#include <stdio.h>

/**
 * factorial - finds factorials of given numbers
 * @n: Input numbers
 * Return: Always 0.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n < 1)
		return (1);
	return (n * factorial(n - 1));
}
