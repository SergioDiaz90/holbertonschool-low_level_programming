#include "lists.h"
/**
 * free_listint - freedoom linked list.
 * @head: pointer of list.
 * Return: nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp = head;

	while (tmp)
	{
		head = head->next;
		free(tmp);
		tmp = head;
	}
}
