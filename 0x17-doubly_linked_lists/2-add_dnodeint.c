#include "lists.h"
/**
 * add_dnodeint - function add in first position new node.
 * @head: beginning of the list
 *
 * Return: Pointer to start beginning list.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new_node = NULL, *copy = NULL;

    copy = *head;
    new_node = malloc(sizeof(dlistint_t));
    if (!new_node)
        return (NULL);
    new_node->n = n;
    if (!copy)
    {
        new_node->next = NULL;
        new_node->prev = NULL;
        *head = new_node;
        return (new_node);
    }
    copy->prev = new_node;
    new_node->prev = NULL;
    *head = new_node;
    new_node->next = copy;
    return (new_node);
}
