#include "holberton.h"
/**
 * *_strspn - find character in c
 *
 * @s : Pointer that is parameter in the function.
 * @accept : Date to search
 * Return: Always pointer.
 */
unsigned int _strspn(char *s, char *accept)
{
	int cnt;
	unsigned int aux = 0;
	int cnt2;

	for (cnt = 0; s[cnt] != 32; cnt++)
	{
		for (cnt2 = 0; accept[cnt2] != '\0'; cnt2++)
		{
			if (s[cnt] == accept[cnt2])
			{
				aux++;
			}
		}
	}
	return (aux);
}
