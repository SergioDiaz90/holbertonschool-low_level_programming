#include "lists.h"
/**
 * add_dnodeint_end - function add in last position new node.
 * @head: beginning of the list
 * @n: Data the new_node
 *
 * Return: Pointer to new node of the list.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new_node = NULL, *copy = NULL;
    copy = *head;

    new_node = malloc(sizeof(dlistint_t));
    if (!new_node)
        return (NULL);
    new_node->n = n;
    if (!copy)
    {
        new_node->prev = NULL;
        new_node->next = NULL;
        copy = new_node;
        *head = copy;
        return (new_node);
    }
    while (copy->next != NULL)
        copy = copy->next;
    copy->next = new_node;
    new_node->prev = copy;
    new_node->next = NULL;
    return (new_node);
}
