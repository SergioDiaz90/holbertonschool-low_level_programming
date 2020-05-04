#include "lists.h"
/**
 * delete_dnodeint_at_index - function for insert node in an index selected.
 * @head: beginning of the list.
 * @index: Number the element to search in the list.
 * Return: 1 in case success or -1 in case of failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *copy = *head, *tmp = NULL;
    unsigned int cnt_nde = 0;

    if (!head || *head == NULL)
        return (-1);
    while (copy)
    {
        
        if (index < 1)
        {
            if (cnt_nde < 1 && copy->next == NULL)
            {
                copy->next = NULL;
                copy->prev = NULL;
                *head = NULL;
                free(tmp);
                free(copy);
                return (1);
            }
            tmp = copy;
            copy = copy->next;
            tmp->next = NULL;
            copy->prev = NULL;
            *head = copy;
            free(tmp);
            return (1);
        }
        if (index > cnt_nde && copy->next == NULL)
        {
            return (-1); 
        }
        if (cnt_nde == index)
        {
            tmp = copy;
            copy = copy->next;
            copy->prev = copy->prev->prev;
            copy = copy->prev;
            copy->next = copy->next->next;
            tmp->prev = NULL;
            tmp->next = NULL;
            free(tmp);
            return(1);
        }
        copy = copy->next;
        cnt_nde++;
    }
    free(tmp);
    return (-1);
}
