#include "holberton.h"
/**
 * print_last_digit - check the code for Holberton School students.
 * @x:  variable initial of the function.
 * Return: print values absolute.
 */
int print_last_digit(int x)
{
	x = x % 10;
	if (x < 0)
		x = x * -1;
	_putchar('0' + x);
	return (x);
}
