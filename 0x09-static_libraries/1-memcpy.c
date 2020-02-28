#include "holberton.h"
/**
 * *_memcpy - print one character n
 *
 * @dest : Pointer that is parameter in the function.
 * @src : Date to print
 * @n : Number of print of b in the s.
 * Return: Always pointer.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int cnt;

	for (cnt = 0; cnt < n; cnt++)
	{
		dest[cnt] = src[cnt];
	}
	return (dest);
}
