#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_set - thing
 * @ht: hash table
 * @key: key
 * @value: value associated with key
 * Return: 1 if succeed or 0 if not
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index;
	hash_node_t *newnode;

	if (key == NULL || ht == NULL || ht->size == 0 || ht->array == NULL)
		return (0);
	index = hash_djb2((unsigned char *)key) % ht->size;
	newnode = malloc(sizeof(hash_node_t));
	if (newnode == NULL)
		return (0);
	newnode->key = strdup(key);
	newnode->value = strdup(value);
	newnode->next = NULL;
	if (ht->array[index] == NULL)
		ht->array[index] = newnode;
	else
	{
		if (strcmp(ht->array[index]->key, key) == 0)
			ht->array[index]->value = strdup(value);
		else
		{
			newnode->next = ht->array[index];
			ht->array[index] = newnode;
		}
	}
	return (1);
}
