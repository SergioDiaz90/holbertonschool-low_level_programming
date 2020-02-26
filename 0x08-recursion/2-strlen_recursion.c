#include "holberton.h"
/**
 * *_strlen_recursion - find character in c
 *
 * @s : Pointer that is parameter in the function.
 * Return: Always pointer.
 */
int _strlen_recursion(char *s)
{
	int cnt = 0;

	if (*s != '\0')
	{
		cnt++;
		return (cnt + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
