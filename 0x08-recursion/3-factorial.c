#include "holberton.h"
/**
 *factorial - find character in c
 *
 * @n : Variable that is parameter in the function.
 * Return: Always pointer.
 */
int factorial(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
