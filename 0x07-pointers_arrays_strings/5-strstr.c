#include "holberton.h"
/**
 * *_strstr - find character in c
 *
 * @haystack : Pointer that is parameter in the function.
 * @needle : Date to search
 * Return: Always pointer.
 */
char *_strstr(char *haystack, char *needle)
{
	int cnt;

	while (haystack[0] != '\0')
	{
		for (cnt = 0; needle[cnt] != '\0'; cnt++)
		{
			if (haystack[0] == needle[cnt])
			{
				return (needle);
			}
		}
		haystack++;
	}
	return (0);
}
