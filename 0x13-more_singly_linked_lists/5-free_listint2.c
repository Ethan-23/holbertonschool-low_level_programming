#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - check the code for Holberton School students.
 * @head: given pointer to a list
 * Return: Always 0.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;
	listint_t *next;

	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
		*head = NULL;
	}
}
