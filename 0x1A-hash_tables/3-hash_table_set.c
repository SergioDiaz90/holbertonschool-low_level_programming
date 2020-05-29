#include "hash_tables.h"

/**
 * hash_table_set- function for search index in array for include data.
 * @ht: pointer to hash-table.
 * @key: string to transform hash
 * @value: data add for hash-table
 * Return: 1 in case success or 0 in case failed.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL, *pos = NULL;
	unsigned int index;

	if (!ht || !key || value == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	pos = ht->array[index];

	while (pos)
	{
		if(!strcmp(key, pos->key))
		{
			free(pos->value);
			pos->value = strdup(value);
			return(1);
		}
		pos = pos->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];

	ht->array[index] = new_node;
	return (1);
}

