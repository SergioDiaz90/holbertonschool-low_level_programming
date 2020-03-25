#include "lists.h"
/**
 * delete_nodeint_at_index - return number of elements in the list.
 * @head: pointer of list.
 * @index: position for insert node.
 * Return: pointer to new element of the list.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = *head;
	listint_t *aux;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	else
	{
		for (; tmp != NULL; i++)
		{
			if (i == index - 1)
			{
				aux = tmp->next;
				tmp->next = aux->next;
				free(aux);
				return (1);
			}
		tmp = tmp->next;
		}
	}

	return (-1);
}
