#include "lists.h"
/**
 * add_nodeint_end - return number of elements in the list.
 * @head: pointer of list.
 * @n : date integrer of list.
 * Return: pointer to new element of the list.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	int i = 0;
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *tmp = *head;

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!tmp)
		*head = new;
	else
	{
		for (; tmp->next != '\0'; i++)
		{
			tmp = tmp->next;
		}

		tmp->next = new;
	}
	return (*head);
}
