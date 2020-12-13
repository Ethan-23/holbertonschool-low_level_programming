#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - check the code for Holberton School students.
 * @head: Given list
 * @n: given var
 * Return: Always 0.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = (n);
	new->prev = NULL;
	if(*head != NULL)
		(*head)->prev = new;
	new->next = (*head);
	(*head) = new;
	return (new);
}
