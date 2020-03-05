#include "holberton.h"
#include <stdlib.h>
#include <limits.h>
/**
 * *malloc_checked - check the code for Holberton School students.
 * @b : parameter with the width of data.
 * Return: Pointer with direction memory..
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *var = NULL;

	var = malloc(b);

	if (var == NULL)
	{
		exit(98);
	}
	return (var);
}
