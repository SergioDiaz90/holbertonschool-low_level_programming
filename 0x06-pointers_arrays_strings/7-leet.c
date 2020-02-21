#include "holberton.h"

/**
 * leet - encodes a string into 1337.
 *@n: char pointer
 *
 *
 *Return: char pointer
 */
char *leet(char *n)
{
	int let[] = {97, 65, 101, 69, 111, 79, 116, 84, 108, 76};

	int num[] = {52, 51, 48, 55, 49};

	int count, count2, aux = 10;

	for (count = 0; n[count] != 0; count++)
	{
		for (count2 = 0; count2 < aux; count2++)
		{
			if (n[count] == let[count2])
			{
				n[count] = num[count2 / 2];
			}
		}
	}
	return (n);
}
