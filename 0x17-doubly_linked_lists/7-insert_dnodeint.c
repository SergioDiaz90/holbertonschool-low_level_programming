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
    
    if (idx == 0)
    {
        copy = add_dnodeint(h, n);
        return (copy);
    }
    while (cnt_list < idx && copy->next != NULL)
    {
        copy = copy->next;
        cnt_list++;
    }
    if (idx > cnt_list)
        return (NULL);
    if (idx == cnt_list + 1)
    {
        copy = add_dnodeint_end(h, n);
        return (copy);
    }
    new_node = malloc(sizeof(dlistint_t));
    if (!new_node)
        return (NULL);
    new_node->n = n;
    new_node->prev = copy->prev;
    new_node->next = copy;
    copy = new_node;
    copy = copy->prev;
    copy->next = new_node;
    copy = *h;
    return (copy);
}
