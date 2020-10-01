#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array - check the code for Holberton School students.
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int count = 0;
	int count2 = 0;
	int hold;

	while (a[count] != a[n])
	{
		count++;
	}
	while (count >= count2)
	{
		count--;
		hold = a[count2];
		a[count2] = a[count];
		a[count] = hold;
		count2++;
	}
}
