#include "holberton.h"
#include <stdio.h>
/**
 * reverse_array - plus two strings
 *
 * @a : Pointer that is parameter in the function.
 * @n : String 1
 * Return: Always dest.
 */
void reverse_array(int *a, int n)
{
	int rev;
	int aux;

	for (rev = 0; rev < n; rev++)
	{
		aux = a[rev];
		a[rev] = a[n - 1];
		a[--n] = aux;
	}
}
