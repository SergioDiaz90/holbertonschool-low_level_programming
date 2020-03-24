#include "lists.h"
/**
 * sum_listint - sum all node list.
 * @head: pointer of list.
 * Return: sum all list.
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp = head;
	int sum = 0;

	while (tmp)
	{
		sum = sum + tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
