#include "variadic_functions.h"
#include <stdlib.h>
/**
 * print_strings - print strings.
 * @n: number of arguments.
 * @separator: is colon.
 * Return: result plus strings.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list data;
	unsigned int i = 0;
	char *str;

	if (separator == NULL)
		return;

	va_start(data, n);

	while (i < n)
	{
		str = va_arg(data, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		printf("%s", str);
		if (i < n - 1)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(data);
}
