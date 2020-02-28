#include "holberton.h"
/**
 * *_memset - print one character n
 *
 * @s : Pointer that is parameter in the function.
 * @b : Date to print
 * @n : Number of print of b in the s.
 * Return: Always pointer.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int cnt;

	for (cnt = 0; cnt < n; cnt++)
	{
		s[cnt] = b;
	}
	return (s);
}
