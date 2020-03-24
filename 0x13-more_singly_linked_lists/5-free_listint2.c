#include "lists.h"
/**
 * free_listint2 - freedoom linked list.
 * @head: pointer of list.
 * Return: nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head != '\0')
	{
		tmp = *head;
		*head = tmp->next;
		free(tmp);
	}

	*head = NULL;
}
