#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_realloc - plus two strings.
 * @ptr : first string.
 * @old_size : second string.
 * @new_size  : size s2.
 * Return: Always pointer concat.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size > old_size)
	{
		free(ptr);
		ptr = malloc(new_size);
		return (ptr);
	}
	else
	{
		if (new_size == old_size)
			return (ptr);

		if (ptr != NULL && new_size == 0)
		{
			free(ptr);
			return (NULL);
		}

		if (ptr == NULL)
		{
			ptr = malloc(new_size);
			return (ptr);
		}
	}
	return (ptr);
}
