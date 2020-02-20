#include "holberton.h"
#include <stdio.h>
/**
 * *_strcmp - plus two strings
 *
 * @s1 : Pointer that is parameter in the function.
 * @s2 : String 1
 * Return: Always dest.
 */
int _strcmp(char *s1, char *s2)
{

	int c1;

	for (c1 = 0; s1[c1] && s2[c1] != '\0'; c1++)
	{
		if (s1[c1] == s2[c1])
		{
			return (0);
		}
		else
		{
			return (s1[c1] - s2[c1]);
		}
	}
	return (0);
}
