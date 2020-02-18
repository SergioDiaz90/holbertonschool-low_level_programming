#include "holberton.h"
#include <stdio.h>

/**
 * swap_int - check the code for Holberton School students.
 * @a : Pointer that is parameter in the function.
 * @b : Pointer that is parameter in the function.
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int c = *b;
	*b = *a;
	*a = c;
}
