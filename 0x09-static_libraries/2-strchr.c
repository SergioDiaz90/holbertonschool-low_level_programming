#include "holberton.h"
/**
 * *_strchr - find character in c
 *
 * @s : Pointer that is parameter in the function.
 * @c : Date to search
 * Return: Always pointer.
 */
char *_strchr(char *s, char c)
{

	while (s[0] != '\0' && s[0] != c)
	{
		s++;
	}
	if (s[0] == c)
	{
		return (s);
	}
	return (0);
}
