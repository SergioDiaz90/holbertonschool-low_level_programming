#include "lists.h"
/**
 * print_dlistint - print linked list
 * @h: pointer to list
 *
 * Return: num_node.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t num_node = 0;

	if (!h)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_node += 1;
	}
	return (num_node);
}
