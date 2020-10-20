#include <stdio.h>
#include "dog.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
	printf("My name is %s, and I am %.1f :) - Woof!\n", d.name);
}
