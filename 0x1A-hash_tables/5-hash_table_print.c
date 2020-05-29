#include "hash_tables.h"

/**
 * hash_table_print- function for print data in hash.
 * @ht: pointer to hash-table.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp = NULL;
	unsigned long int cnt = 0, cnt2 = 0;

	if (!ht)
		return;

	printf("{");
	while (cnt < ht->size + 1)
	{
		tmp = ht->array[cnt];
		while (tmp)
		{
			if (cnt2 > 0)
				printf(", ");
			cnt2++;
			printf("'%s':'%s'", tmp->key, tmp->value);
			tmp = tmp->next;
		}
		cnt++;
	}
	printf("}\n");
}

