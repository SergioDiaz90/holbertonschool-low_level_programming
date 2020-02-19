#include "holberton.h"
#include <stdio.h>
/**
 * _strcpy - check the code
 *
 * @dest : Pointer that is parameter in the function.
 * @src : String 1
 * Return: Always dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = src[i];

	return (dest);
}
