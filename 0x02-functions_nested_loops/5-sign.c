#include "holberton.h"
/**
 * print_sing - check the code for Holberton School students.
 * @n: Variable initial of the function.
 * Return: print in number if character is lowercase or not.
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
