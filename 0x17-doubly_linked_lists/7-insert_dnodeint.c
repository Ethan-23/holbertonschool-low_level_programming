#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - check the code for Holberton School students.
 * @h: thing
 * @idx: thing
 * @n: thing
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *temp = *h;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	for (i = 0; i < idx - 1; i++)
		temp = temp->next;
	new->n = n;
	new->next = temp->next;
	temp->next->prev = new;
	temp->next = new;
	new->prev = temp;
	if (new->next != NULL)
		new->next->prev = new;
	return (new);
}
