#include "lists.h"
/**
 * print_listint - print all list.
 * @h: pointer of list.
 * Return: lenght of list.
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h != '\0'; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
