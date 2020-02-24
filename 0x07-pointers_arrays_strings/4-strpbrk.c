#include "holberton.h"
/**
 * *_strpbrk - find character in c
 *
 * @s : Pointer that is parameter in the function.
 * @accept : Date to search
 * Return: Always pointer.
 */
char *_strpbrk(char *s, char *accept)
{
	int cnt = 0;

	while (s[0] != '\0')
	{
		for (cnt = 0; accept[cnt] != '\0'; cnt++)
		{
			if (s[0] == accept[cnt])
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}
