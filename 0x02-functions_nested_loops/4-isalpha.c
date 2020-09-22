#include "holberton.h"

/**
 * _isalpha - detects letters vs numbers.
 * @c: test
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
