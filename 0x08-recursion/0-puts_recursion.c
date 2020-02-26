#include "holberton.h"
/**
 * *_puts_recursion - find character in c
 *
 * @s : Pointer that is parameter in the function.
 * Return: Always pointer.
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
