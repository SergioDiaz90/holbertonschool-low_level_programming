#include "lists.h"
/**
 * pop_listint - delete principal node.
 * @head: pointer of list.
 * Return: data node deleted.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = head;
	unsigned int cnt;

	if (head == NULL)
		return (NULL);

	for (cnt = 0; cnt != index; cnt++)
	{
		if (tmp == '\0')
			return (NULL);

		tmp = tmp->next;
	}
	return (tmp);
}
