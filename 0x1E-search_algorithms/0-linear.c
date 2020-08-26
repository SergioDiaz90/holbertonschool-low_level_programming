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
	int *tmp = NULL;
	size_t cnt = 0;

	if (!array)
		return (-1);
	tmp = array;

	while (cnt < size)
	{
		printf("Value checked array [%d] = [%d]\n", (int)cnt, tmp[cnt]);
		if (tmp[cnt] == value)
			return (cnt);
		cnt += 1;
	}
	return (-1);
}
