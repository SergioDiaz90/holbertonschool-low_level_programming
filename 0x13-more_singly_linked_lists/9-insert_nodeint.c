#include "lists.h"
/**
 * insert_nodeint_at_index - return number of elements in the list.
 * @head: pointer of list.
 * @n : date integrer of list.
 * @idx: position for insert node.
 * Return: pointer to new element of the list.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *tmp = *head;

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL && idx > 0)
	{
		free(new);
		return (NULL);
	}
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (; i < idx - 1; i++)
	{
		if (tmp == NULL && idx - i > 0)
		{
			free(new);
			return (NULL);
		}
		tmp = tmp->next;
	}

	new->next = tmp->next;
	tmp->next = new;

	return (new);
}
