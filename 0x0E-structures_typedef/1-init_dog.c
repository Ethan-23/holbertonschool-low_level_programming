#include <stdio.h>
#include "dog.h"
/**
 * init_dog - Ryan_the_boss_10
 * struct dog - Short description
 * @d: thing
 * @name: thing
 * @age: thing
 * @owner: thing
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
