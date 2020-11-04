#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - check the code for Holberton School students.
 * @head: given list
 * Return: Always 0.
 */
int sum_listint(listint_t *head)
{
	if (head == NULL)
		return (0);
	return (head->n + sum_listint(head->next));
}
