#include "hash_tables.h"

/**
 *hash_table_get - function for find data in the array.
 * @ht: pointer to hash-table.
 * @key: key search in table
 * Return: value in case success or NULL in case failed.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp = NULL;

	index = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[index];

	while (tmp)
	{
		if (!strcmp(key, tmp->key))
			return (tmp->value);
		tmp = tmp->next;
	}

	return (NULL);
}

