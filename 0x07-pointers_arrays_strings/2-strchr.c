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
	int cnt;

	for (cnt = 0; s[cnt] != '\0'; cnt++)
	{
		if (s[cnt] == c)
		{
			s++;
			return (s);
		}
		s++;
	}
	if (s[cnt] == c)
	{
		s++;
		return (s);
	}
	s++;
	return (0);
}
