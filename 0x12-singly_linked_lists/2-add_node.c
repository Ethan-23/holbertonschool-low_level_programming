#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - check the code for Holberton School students.
 * @head: list
 * @str: strings
 * Return: Always 0.
 */
list_t *add_node(list_t **head, const char *str)
{
	int charnum;
	list_t *new_list = malloc(sizeof(list_t));

	if (new_list == NULL)
		return (NULL);
	for (charnum = 0; str[charnum] != '\0'; charnum++)
	{}
	new_list->str = strdup(str);
	new_list->len = charnum;
	new_list->next = (*head);
	(*head) = new_list;
		return (new_list);
}
