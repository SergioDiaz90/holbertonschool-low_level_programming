#include "holberton.h"
/**
 * is_prime_number - find character in c
 * @n : Variable that is parameter in the function.
 * @cnt : other variable.
 * Return: Always pointer.
 */
int operation_prime(int cnt, int n);

int is_prime_number(int n)
{
	int cnt = 1;

	return (operation_prime(cnt, n));
}

/**
 * operation_prime - find character in c
 * @n : Variable that is parameter in the function.
 * @cnt : Parameter in the function.
 * Return: Always pointer.
 */

int operation_prime(int cnt, int n)
{
	if (n < 2 || cnt * cnt == n)
	{
		return (0);
	}
	else if (cnt * cnt > n)
	{
		return (1);
	}
	else
	{
		return (1);
	}
}
