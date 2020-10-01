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
	int count = n-1;
	int count2 = 0;
	int hold;

	while (count > count2)
	{
		hold = a[count2];
		a[count2] = a[count];
		a[count] = hold;
		count2++;
		count--;
	}
}
