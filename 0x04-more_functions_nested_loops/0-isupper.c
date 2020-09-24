#include "holberton.h"
#include <stdio.h>

/**
 * _isupper - checks if letter stored in c is uppercase
 * @c: letter being checked
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
			return (0);
	}
}
