#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - creation of one array with characters.
 * @c: character.
 * @size: the size of the memory to print
 *
 * Return: pointer.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int cnt;

	char *ctr;

	if (size == 0)
	{
		return (NULL);
	}
	ctr = malloc(sizeof(char) * size);

	if (ctr == '\0')
	{
		return (NULL);
	}

	for (cnt = 0; cnt < size; cnt++)
		ctr[cnt] = c;

	return (ctr);
}
