#include "hash_tables.h"

/**
 * key_index- function for search index in array for include data.
 * @size: size of array the hash-table.
 * @key: string to transform hash
 * Return: index for include data in array.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	if (!key || !size)
		return (0);

	index = hash_djb2(key) % size;
	return (index);
}
