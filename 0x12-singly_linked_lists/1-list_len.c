#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - check the code for Holberton School students.
 * @h: list
 * Return: Always 0.
 */
size_t list_len(const list_t *h)
{
	int charnum;

	for (charnum = 0; h != NULL; charnum++)
		h = h->next;
	return (charnum);
}
