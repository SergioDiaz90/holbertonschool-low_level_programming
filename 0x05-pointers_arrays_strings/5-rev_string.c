#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - check the code
 * @s : Pointer that is parameter in the function.
 */
void rev_string(char *s)
{
	int i;
	int aux;
	int b;

	for (i = 0; *(s + i) != '\0' ; i++)
	{
	}

	i -= 1;

	for (b = 0; b < i; b++)
	{
		aux = *(s + b);
		*(s + b) = *(s + i);
		*(s + i) = aux;
		i--;
	}
}
