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

	while (haystack[0] != '\0' && needle != '\0')
	{
		if ((haystack[0] >= 32 ) == needle[cnt])
		{
			return (haystack);
		}
		haystack++;
		cnt++;
	}
	return (0);
}
