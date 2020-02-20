#include "holberton.h"
#include <stdio.h>
/**
 * *_strcat - plus two strings
 *
 * @dest : Pointer that is parameter in the function.
 * @src : String 1
 * Return: Always dest.
 */
char *_strcat(char *dest, char *src)
{
	int c1;
	int c2;

	for (c1 = 0; dest[c1] != '\0'; c1++)
	{
	}
	for (c2 = 0; src[c2] != '\0'; c2++)
		dest[c1 + c2] = src[c2];

	return (dest);

}
