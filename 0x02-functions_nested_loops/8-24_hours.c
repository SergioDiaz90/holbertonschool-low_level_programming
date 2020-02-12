#include "holberton.h"
/**
 * jack_bauer - check the code for Holberton School students.
 * x:variable.
 * y:second variable.
 * Return: print values absolute.
 */
void jack_bauer(void)
{
	for (x = 0; x < 24 ; x++)
	{
		for (y = 0; y < 60; y++)
		{
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
			_putchar(':');
			_putchar((y / 10) + '0');
			_putchar((y % 10) + '0');
			_putchar('\n');
		}
	}
}
