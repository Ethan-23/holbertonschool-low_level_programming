#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_delete - Delete Hash Table
 * @ht: hash table
 * Return: delete
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node;
	unsigned int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
			while (ht->array[i] != NULL)
			{
				node = ht->array[i];
				ht->array[i] = ht->array[i]->next;
				free(node->key);
				free(node->value);
				free(node);
			}
	}
	free(ht->array);
	free(ht);
}
