#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - check the code for Holberton School students.
 * @h: given var
 * Return: Always 0.
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
