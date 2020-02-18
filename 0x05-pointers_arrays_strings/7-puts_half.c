#include "holberton.h"
#include <stdio.h>

/**
 * puts_half - check the code
 * @str : Pointer that is parameter in the function.
 */
void puts_half(char *str)
{
	int i;
	int x;
	int aux;

	for (i = 0; *(str + i) != '\0'; i++)
	{

	}

	x = i / 2;

	for (x = x; x < i ; x++)
	{
		aux = *(str + x);
		_putchar (aux);
	}
	_putchar('\n');
}
