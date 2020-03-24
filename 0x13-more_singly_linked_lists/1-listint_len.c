#include "lists.h"
/**
 * listint_len - return number of elements in the list.
 * @h: pointer of list.
 * Return: lenght of list.
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	for (; h != '\0'; i++)
	{
		h = h->next;
	}
	return (i);
}
