#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - asignament space in memory.
 * @nmemb : number spaces.
 * @size : type data.
 * Return: Always pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int cnt = 0;
	char *aux;

	if ((nmemb == 0) || (size == 0))
		return (NULL);

	aux = malloc(size * nmemb);

	if (aux == NULL)
		return (NULL);

	for (; cnt < nmemb; cnt++)
	{
		aux[cnt] = 0;
	}
	return (aux);
}
