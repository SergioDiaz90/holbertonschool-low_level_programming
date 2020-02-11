#include "holberton.h"
/**
 * print_sign - check the code for Holberton School students.
 * @n: Variable initial of the function.
 * Return: print in characters and return numbers.
 */
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
