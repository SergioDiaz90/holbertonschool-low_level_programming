#include "hash_tables.h"

/**
 * hash_table_create - function for create an space in memory for hast-table.
 * @size: size of array the hash-table.
 * Return: Pointer to the hash-table or Null in case of failed.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *array = NULL;

	if (!size)
		return (NULL);
	array = malloc(sizeof(hash_table_t) * size);

	if (!array)
		return (NULL);
	return (array);
}
