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
	unsigned int i, j;
	dlistint_t *temp = *h;
	dlistint_t *templen = *h;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	for(j = 0; templen != NULL; j++)
		templen = templen->next;
	if(h == NULL || *h == NULL || idx == j)
		return (add_dnodeint_end(h, n));
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (new == NULL)
		return (NULL);
	for (i = 0; i < idx - 1; i++)
		temp = temp->next;
	if (temp == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = temp->next;
	temp->next->prev = new;
	temp->next = new;
	new->prev = temp;
	if (new->next != NULL)
		new->next->prev = new;
	return (new);
}
