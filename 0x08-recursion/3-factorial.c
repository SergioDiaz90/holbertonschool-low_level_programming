#include "holberton.h"
/**
 * *_strlen_recursion - find character in c
 *
 * @s : Pointer that is parameter in the function.
 * Return: Always pointer.
 */
int factorial(int n)
{

	if (n < 0)
	{
		return(-1);
	}
	else if(n == 0)
	{
		return (1);
	}
	else
	{
		return(n * factorial(n - 1));
	}
}
