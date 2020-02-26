#include "holberton.h"
/**
 *_pow_recursion - find character in c
 *
 * @x : Variable that is parameter in the function.
 * @y : Parameter in the function.
 * Return: Always pointer.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y < 2)
	{
		return (x);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
