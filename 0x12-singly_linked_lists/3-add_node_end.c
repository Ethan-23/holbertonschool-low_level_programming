#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - check the code for Holberton School students.
 * @head: list
 * @str: string
 * Return: Always 0.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int charnum;
	list_t *new_list = malloc(sizeof(list_t));
	list_t *last = *head;

	if (new_list == NULL)
		return (NULL);
	for (charnum = 0; str[charnum] != '\0'; charnum++)
	{
	}
	new_list->str = strdup(str);
	new_list->len = charnum;
	new_list->next = NULL;
	if (*head == NULL)
	{
		*head = new_list;
		return (new_list);
	}
	while (last->next != NULL)
		last = last->next;

	last->next = new_list;
	return (new_list);
}
