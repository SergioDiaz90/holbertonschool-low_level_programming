#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: Num of parameters
 * Return: Sum of all the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int x;
	va_list ap;
	unsigned int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(ap, n);
	for (x = 0; x < n; x++)
	{
		sum = sum + va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
