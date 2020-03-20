#include "lists.h"
/**
 * printf_list - print arguments in the list.
 * @h: pointer at node.
 * Return: lenght of list-linked.
 */
size_t printf_list(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		h = h->next, size++;
	}
	return (size);
}
