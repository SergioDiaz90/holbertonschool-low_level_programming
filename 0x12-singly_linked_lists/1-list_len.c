#include "lists.h"
/**
 * list_len - print arguments in the list.
 * @h: pointer at node.
 * Return: lenght of list-linked.
 */
size_t list_len(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		h = h->next, size++;
	}
	return (size);
}
