#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	int on = 0;
	unsigned int i;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (on == 1)
				printf(", ");
			printf("\'%s\': \'%s\'", node->key, node->value);
			on = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
