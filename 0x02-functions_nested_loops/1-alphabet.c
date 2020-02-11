#include "holberton.h"
/**
 * print_alphabet - check the code for Holberton School students.
 *
 * Return: print the alphabet in lowercase.
 */
void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z' ; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
