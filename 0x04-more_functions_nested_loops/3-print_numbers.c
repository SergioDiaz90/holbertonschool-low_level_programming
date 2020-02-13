#include "holberton.h"
#include <stdio.h>
/**
 * print_numbers - print numbers from 0 to 9.
 * i: variable initial of the function.
 * Return: col of numbers 0 to 9 followed by a new line.
 */
void print_numbers(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		_putchar (i + '0');
	}
	_putchar ('\n');
}
