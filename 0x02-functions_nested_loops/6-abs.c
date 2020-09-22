#include "holberton.h"
#include <stdio.h>

/**
 * _abs - find absolute value.
 * @r: test
 * Return: Always 0.
 */

int _abs(int r)
{
	if (r < 0)
	{
		return (r * -1);
	}
	else
	{
		return (r);
	}
}
