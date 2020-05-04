#include "lists.h"
/**
 * free_dlistint - function for free all list.
 * @head: beginning of the list
 *
 * Return: nothing because is an function type void.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *copy;

	while (head)
	{
		copy = head;
		head = head->next;
		copy->prev = NULL;
		copy->next = NULL;
		free(copy);
	}
}
