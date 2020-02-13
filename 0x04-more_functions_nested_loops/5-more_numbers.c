#include "holberton.h"
#include <stdio.h>
/**
 * more_numbers - print numbers from 0 to 9.
 * i: variable initial of the loop.
 * line: varible second of the loop.
 * Return: col of numbers 0 to 9 except 2 and 4 followed by a new line.
 */
void more_numbers(void)
{
	int i;
	int line;

	for (line = 0; line <= 10; line++)
	{
		for (i = 0 ; i <= 14 ; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar ((i % 10) + '0');
		}
	_putchar ('\n');
	}
}
