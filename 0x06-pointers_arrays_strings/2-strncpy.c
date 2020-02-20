#include "holberton.h"
#include <stdio.h>
/**
 * *_strncpy - plus two strings
 *
 * @dest : Pointer that is parameter in the function.
 * @src : String 1
 * @n : Size the array.
 * Return: Always dest.
 */
char *_strncpy(char *dest, char *src, int n)
{

	int c2;

	for (c2 = 0; c2 < n && src[c2] >= '\0'; c2++)
	{
		dest[c2] = src[c2];
	}
	return (dest);
}
