#include "holberton.h"
/**
 *_sqrt_recursion - find character in c
 * @n : Variable that is parameter in the function.
 * Return: Always pointer.
 */
int _sqrt_recursion(int n);
{
	int cnt = 1;

	return (square_root(cnt, n));
}

/**
 * square_root - find character in c
 * @n : Variable that is parameter in the function.
 * @cnt : Parameter in the function.
 * Return: Always pointer.
 */

int square_root(int cnt, int n)
{
	if (n < 0 || cnt * cnt > n)
	{
		return (-1);
	}
	else if (cnt * cnt == n)
	{
		return (cnt);
	}
	else if (n > 1)
	{
		return (square_root(cnt + 1, n));
	}
	return (0);
}
