#include "holberton.h"
#include <stdio.h>

/**
 * print_rev - check the code
 * @s : Pointer that is parameter in the function.
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0' ; i++)
	{
	}
	for (i -= 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
