#include "holberton.h"
#include <stdio.h>

/**
 * _puts - check the code
 * @str : Pointer that is parameter in the function.
 */
void _puts(char *str)
{
	int i;

	for (i = 0;  *(str + i) != '\0' ; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
