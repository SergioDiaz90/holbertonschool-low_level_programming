#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - check the code for Holberton School students.
 * @b = parameter with the width of data.
 * Return: Pointer with direction memory..
 */
void *malloc_checked(unsigned int b)
{
	void *var = NULL;

	var = malloc(sizeof(b));
	if (var == NULL)
	{
		exit(98);
	}
	else
	{
		return (var);
	}
}
