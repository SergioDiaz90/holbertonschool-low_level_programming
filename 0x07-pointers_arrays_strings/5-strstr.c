#include "holberton.h"
#include <stdio.h>
/**
 * _strstr - Locates a substring
 * @haystack: String
 * @needle: Substring
 *
 * Return: Pointer to the beginning of the located substring.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *b = haystack;
		char *p = needle;

		while (*p == *haystack && *p != '\0' && *haystack != '\0')
		{
			haystack++;
			p++;
		}
		if (*p == '\0')
			return (b);
		haystack = b + 1;
	}
	return (0);
}
