#include "holberton.h"
#include <stdio.h>
/**
 * print_diagonal - print numbers from 0 to 9.
 * @n: variable initial of the function.
 * Return: col of numbers 0 to 9 followed by a new line.
 */
void print_diagonal(int n)
{
	int x;
	int a;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			for (a = 0; a < x; a++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
