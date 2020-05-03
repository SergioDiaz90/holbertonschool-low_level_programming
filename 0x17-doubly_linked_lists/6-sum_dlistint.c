#include "lists.h"
/**
 * sum_dlistint - function for plus all nodes in the list.
 * @head: beginning of the list.
 * Return: result of the plus of the nodes.
 */
int sum_dlistint(dlistint_t *head)
{
    int sum = 0;

    if (!head)
        return (0);
    while (head)
    {
        sum += head->n;
        head = head->next;
    }
    return (sum);
}