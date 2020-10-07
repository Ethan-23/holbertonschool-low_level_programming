#include "holberton.h"
#include <stdio.h>
/**
 * count - check the code for Holberton School students.
 * @a: multiplication num
 * @n: given value
 * Return: Always 0.
 */
int count(int a, int n)
{
	if (a * a == n)
		return (a);
	if (a * a > n)
		return (-1);
	return (count(a + 1, n));
}
/**
 * _sqrt_recursion - output function
 * @n: nimber
 * Return: Always Something
 **/
int _sqrt_recursion(int n)
{
	return (count(1, n));
}
