#include "lists.h"
/**
 * get_dnodeint_at_index - function for find index of an data in the list.
 * @head: beginning of the list.
 * @index: Number the element to search in the list.
 * Return: pointer the element finded.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    unsigned int cnt_list = 0;
    dlistint_t *copy = head;

    while (cnt_list < index && copy->next != NULL)
    {
        copy = copy->next;
        cnt_list++;
    }
    if (index > cnt_list)
    {
        return (NULL);
    }
    return (copy);
}
