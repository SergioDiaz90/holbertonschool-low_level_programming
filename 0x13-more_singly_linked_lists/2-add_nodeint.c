#include "lists.h"
/**
 * add_nodeint - return number of elements in the list.
 * @head: pointer of list.
 * @n : date integrer of list.
 * Return: pointer to new element of the list.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
