#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - plus of parameters n.
 * @n: number of arguments.
 * Return: result plus all arguments.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list date;
	unsigned int i;
	unsigned int sum = 0;

	if (n == 0)
		return (0);

	va_start(date, n);
	for (i = 0; i < n; i++)
		sum = sum + va_arg(date, unsigned int);

	va_end(date);
	return (sum);
}
