#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - check the code for Holberton School students.
 * @head: given list
 * Return: Always 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	temp = *head;
	if (temp == NULL)
		return (0);
	num = temp->n;
	*head = (*head)->next;
	free(temp);
	return (num);
}
