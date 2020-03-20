#include "lists.h"
#include <string.h>
/**
 * *add_node - add in first position the list linked.
 * @str: pointer of strings in the structures.
 * @head: Doble pointer to first node list linked.
 * Return: list linked plus newnodo.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnodo;
	int i = 0;

	newnodo = malloc(sizeof(list_t));
	if (newnodo == NULL)
		return (NULL);
	newnodo->str = strdup(str);
	for (; str[i] != '\0'; i++)
	{}
	newnodo->len = i;
	newnodo->next = *head;
	*head = newnodo;
	return (newnodo);
}
