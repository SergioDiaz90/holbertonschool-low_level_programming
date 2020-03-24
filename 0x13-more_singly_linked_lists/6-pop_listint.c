#include "lists.h"
/**
 * pop_listint - delete principal node.
 * @head: pointer of list.
 * Return: data node deleted.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	int aux;

	if (head == NULL)
		return (0);

	aux = tmp->n;
	*head = tmp->next;
	free(tmp);
	return (aux);
}
