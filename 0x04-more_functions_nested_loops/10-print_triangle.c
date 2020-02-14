#include "holberton.h"
#include <stdio.h>
/**
 * print_triangle - print numbers from 0 to 9.
 * @size: variable initial of the function.
 * Return: col of numbers 0 to 9 followed by a new line.
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if (j != size && j <= size - i)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}
