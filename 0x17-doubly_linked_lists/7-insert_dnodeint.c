#include "lists.h"
/**
 * insert_dnodeint_at_index - function for insert node in an index selected.
 * @h: beginning of the list.
 * @idx: Number the element to search in the list.
 * @n: data an agree in the new node.
 * Return: pointer the element added.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL, *copy = *h;
	unsigned int cnt_list = 0;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	if (!copy || n < 0)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	while (copy)
	{
		if (idx == cnt_list)
		{
			new_node->prev = copy->prev;
			new_node->next = copy;
			copy->prev = new_node;
			new_node->prev->next = new_node;
			return (new_node);
		}
		if (!copy->next && idx == cnt_list + 1)
			return (free(new_node), add_dnodeint_end(h, n));
		copy = copy->next;
		cnt_list++;
	}
	free(new_node);
	return (NULL);
}

