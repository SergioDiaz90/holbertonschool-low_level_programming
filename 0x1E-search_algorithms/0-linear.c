#include "search_algos.h"
/**
 * linear_search - Function for search an value in sort array.
 * @array: Pointer first item of array.
 * @size: Size of array.
 * @value: Value to searched in array.
 * Return: cnt in case of success or -1 if not found value.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t cnt = 0;

	if (!array)
		return (-1);
	while (cnt < size)
	{
		printf("Value checked array [%lu] = [%d]\n", cnt, array[cnt]);
		if (array[cnt] == value)
			return (cnt);
		cnt += 1;
	}
	return (-1);
}
