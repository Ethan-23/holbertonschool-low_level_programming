#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - check the code for Holberton School students.
 * @name: test
 * @age: test
 * @owner: test
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *copy;
	int i = 0;

	copy = malloc(sizeof(dog_t));
	if (copy == NULL)
	{
		free(copy);
		return (NULL);
	}
	(*copy).name = malloc(sizeof(name));
	if ((*copy).name == NULL)
	{
		free(copy);
		free((*copy).name);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
	{
		(*copy).name[i] = name[i];
	}
	(*copy).age = age;
	(*copy).owner = malloc(sizeof(owner));
	if ((*copy).owner == NULL)
	{
		free(copy);
		free((*copy).name);
		free((*copy).owner);
		return (NULL);
	}
	for (i = 0; owner[i] != '\0'; i++)
	{
		(*copy).owner[i] = owner[i];
	}
	return (copy);
}
