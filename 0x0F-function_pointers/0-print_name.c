#include "function_pointers.h"
#include <stdio.h>


/**
 * *print_name - function print name.
 * @name: return char.
 * @f: pointer to an function.
 *
 * Return: pointer.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
	{
		return;
	}
		f(name);
}
