#include "holberton.h"
#include <stdio.h>

/**
 * print_array - check the code
 * @a : Pointer that is parameter in the function.
 * @n : Variable integree
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if(i < (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
