#include "variadic_functions.h"
#include <stdlib.h>

/**
 * op_cha - print char.
 * @c: char.
 *
 * Return: nothing;
 */

void op_cha(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * op_int - function print integer.
 * @i: integrer.
 *
 * Return: nothing.
 */

void op_int(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * op_flo - function print floats
 * @f: float.
 *
 * Return: float.
 */

void op_flo(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * op_ptr - print strings
 * @s: pointer s.
 *
 * Return: integree.
 */

void op_ptr(va_list s)
{
	char *str;

	str = va_arg(s, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - print strings.
 * @format: is format.
 * Return: nothing.
 */

void print_all(const char * const format, ...)
{
	char *coma = "";
	va_list data;
	int i = 0;
	int i2 = 0;

	type array[] = {
		{"c", op_cha},
		{"i", op_int},
		{"f", op_flo},
		{"s", op_ptr},
		{NULL, NULL}
	};

	va_start(data, format);


	while (format != NULL && format[i] != '\0')
	{
		i2 = 0;

		while (array[i2].arr != '\0')
		{
			if (array[i2].arr[0] == format[i])
			{
				printf("%s", coma);
				array[i2].f(data);
				coma = ", ";
			}
			i2++;
		}
		i++;
	}
	printf("\n");
	va_end(data);
}
