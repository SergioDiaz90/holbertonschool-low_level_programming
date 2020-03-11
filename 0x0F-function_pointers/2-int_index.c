#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - search integree in array.
 * @array: array of integree.
 * @size: lenght of array.
 * @cmp: pointer to array.
 *
 * Return: pointer.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int cnt = NULL;

	if (size <= 0)
		return (-1);
	if (array == '\0' || cmp == '\0')
		return (-1);
	for (cnt = 0; cnt < size; cnt++)
	{
		if(cmp(array[cnt]) != 0)
			return (cnt);
	}
	return (-1);
}
