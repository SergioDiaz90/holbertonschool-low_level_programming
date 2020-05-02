#include "lists.h"
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * for Holberton project
 */

size_t print_dlistint(const dlistint_t *h)
{
    size_t num_node = 0;

    if (!h)
        return (0);
    while(h)
    {
        printf("%d\n", h->n);
        h = h->next;
        num_node += 1;
    }
    return (num_node);
}
