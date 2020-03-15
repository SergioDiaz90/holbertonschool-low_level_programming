#include "variadic_functions.h"
#include <stdlib.h>
/**
 * print_numbers - plus of parameters n.
 * @n: number of arguments.
 * @separator: the comma that is a string
 * Return: result plus all arguments.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list data;
	unsigned int i;

	va_start(data, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(data, unsigned int));
		if (i != (n - 1))
			if (separator != NULL)
				printf("%s", separator);
	}
	printf("\n");
	va_end("data");
}
