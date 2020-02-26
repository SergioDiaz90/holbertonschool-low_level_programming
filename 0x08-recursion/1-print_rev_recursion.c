#include "holberton.h"
/**
 * *_print_rev_recursion - find character in c
 *
 * @s : Pointer that is parameter in the function.
 * Return: Always pointer.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
	}
	_putchar(*s);
}
