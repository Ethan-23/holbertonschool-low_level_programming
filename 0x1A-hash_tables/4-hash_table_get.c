#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_get - check the code for Holberton School students.
 * @ht: hash table
 * @key: key
 * Return: value of element or null of key is not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index;
	hash_node_t *find;

	if (key == NULL || ht == NULL)
		return (NULL);
	index = hash_djb2((unsigned char *)key) % ht->size;
	find = ht->array[index];
	while (find != NULL)
	{
		if (strcmp(find->key, key) == 0)
			return (find->value);
		find = find->next;
	}
	return (NULL);
}
