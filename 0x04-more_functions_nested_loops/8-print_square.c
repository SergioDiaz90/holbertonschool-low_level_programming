#include "holberton.h"
#include <stdio.h>
/**
 * print_square - print numbers from 0 to 9.
 * @size: variable initial of the function.
 * Return: col of numbers 0 to 9 followed by a new line.
 */
void print_square(int size)
{
	int x;
	int a;

	if (size > 0)
	{
		for (x = 0; x < size; x++)
		{

			for (a = 0; a < size; a++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
