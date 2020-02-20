#include "holberton.h"
#include <stdio.h>
/**
 * *_strncat - plus two strings
 *
 * @dest : Pointer that is parameter in the function.
 * @src : String 1
 * @n : Size the array.
 * Return: Always dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int c1;
	int c2;

	for (c1 = 0; dest[c1] != '\0'; c1++)
	{
	}
	for (c2 = 0; c2 < n && src[c2] != '\0'; c2++)
	{
		dest[c1 + c2] = src[c2];
	}
	dest[c1 + c2] = '\0';
	return (dest);

}
