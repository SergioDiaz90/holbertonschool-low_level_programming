#include "lists.h"
/**
 * insert_dnodeint_at_index - function for insert node in an index selected.
 * @h: beginning of the list.
 * @idx: Number the element to search in the list.
 * @n: data an agree in the new node.
 * Return: pointer the element added.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node = NULL, *copy = NULL;
    unsigned int cnt_list = 0;

    copy = *h;
    
    while (cnt_list < idx && copy->next != NULL)
    {
        copy = copy->next;
        cnt_list++;
    }
    if (idx > cnt_list)
    {
        return (NULL);
    }
    copy = copy->prev;
    new_node = malloc(sizeof(dlistint_t));
    if (!new_node)
        return (NULL);

    new_node->n = n;
    new_node->prev = copy;
    new_node->next = copy->next;
    copy->next = new_node;
    return (new_node);
}
