#include "holberton.h"
#include <stdio.h>
/**
 * print_line - print numbers from 0 to 9.
 * @n: variable initial of the function.
 * Return: col of numbers 0 to 9 followed by a new line.
 */
void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
