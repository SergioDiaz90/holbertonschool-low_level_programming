#include "hash_tables.h"

/**
 * hash_table_delete - function for all hash-table.
 * @ht: pointer to hash-table.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp = NULL, *aux = NULL;
	unsigned long int cnt = 0;

	if (!ht)
		return;

	while(cnt < ht->size)
	{
		tmp = ht->array[cnt];
		while (tmp)
		{
			aux = tmp->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
			tmp = aux;
		}
		cnt++;
	}
	free(ht->array);
	free(ht);
}

