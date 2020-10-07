#include "holberton.h"
#include <stdio.h>

/**
 * checker - check the code for Holberton School students.
 * @a: number checking
 * @n: number being checked
 * Return: Always 0.
 */

int checker(int a, int n)
{
	if (n == 1 || n == -1)
		return (0);
	if (n % a == 0)
		return (0);
	if (n / 2 < a)
		return (1);
	return (checker(a + 1, n));
}
/**
 * is_prime_number - checks for prime numbers
 * @n: number checked
 * Return: Always something
 **/
int is_prime_number(int n)
{
	return (checker(2, n));
}
