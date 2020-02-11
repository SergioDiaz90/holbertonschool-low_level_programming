#include "holberton.h"
/**
 * print_alphabet_x10 - check the code for Holberton School students.
 *
 * Return: print the alphabet in lowercase x10.
 */
void print_alphabet_x10(void)
{
	int x;
	int y;

	for (y = 0; y < 10 ; y++)
	{
		for (x = 'a'; x <= 'z' ; x++)
		{
			_putchar(x);
		}
	_putchar('\n');
	}
}
