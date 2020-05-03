#include "lists.h"
/**
 * dlistint_len- function print data list
 * @h: pointer to the list
 *
 * Return: lenght of the list
 */

size_t dlistint_len(const dlistint_t *h)
{
    size_t num_node = 0;

    if (!h)
        return (0);
    while (h)
    {
        h = h->next;
        num_node += 1;
    }
    return (num_node);
}
