#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - check the code for Holberton School students.
 * @head: given list
 * @index: given index
 * Return: Always 0.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;
	dlistint_t *new = head;

	for (count = 0; new != NULL; count++)
	{
		if (count == index)
			return (new);
		new = new->next;
	}
	return (new);
}
