#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * print_list - prints everything in a list
 * @h: given
 * Return: 0
 */
size_t print_list(const list_t *h)
{
	int charnum;

		for (charnum = 0; h != NULL; charnum++)
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}
		return (charnum);
}
