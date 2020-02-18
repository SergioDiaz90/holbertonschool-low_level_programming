#include "holberton.h"
#include <stdio.h>

/**
 * puts2 - check the code
 * @str : Pointer that is parameter in the function.
 */
void puts2(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		if (*(str + i) % 2 == 0)
		{
			_putchar(*(str + i));
		}
	}
	_putchar('\n');
}
