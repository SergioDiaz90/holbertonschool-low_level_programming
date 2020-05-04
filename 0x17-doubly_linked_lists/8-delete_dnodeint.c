#include "lists.h"
/**
 * delete_dnodeint_at_index - function for insert node in an index selected.
 * @head: beginning of the list.
 * @index: Number the element to search in the list.
 * Return: 1 in case success or -1 in case of failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *next, *prev;
	unsigned int c;

	if (*head == NULL)
		return (-1);

	for (tmp = *head, c = 0, prev = NULL; tmp && c < index; c++)
	{
		prev = tmp;
		tmp = tmp->next;
	}

	if (tmp == NULL)
		return (-1);

	next = tmp->next;
	if (prev == NULL)
	{
		free(tmp);
		if (next != NULL)
		{
			next->prev = NULL;
			*head = next;
		}
		else
			*head = NULL;
	}
	else if (next == NULL)
	{
		prev->next = NULL;
		free(tmp);
	}
	else
	{
		prev->next = next;
		next->prev = prev;
		free(tmp);
	}

	return (1);
}
