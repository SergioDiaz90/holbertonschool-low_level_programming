#include "holberton.h"

/**
 * rot13 - encodes a string.
 *@n: char pointer
 *Return: char pointer
 */
char *rot13(char *n)
{
	int count, count2, aux = 52;

	char abc[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	char nop[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (count = 0; n[count] != 0; count++)
	{
		for (count2 = 0; count2 < aux; count2++)
		{
			if (n[count] == abc[count2])
			{
				n[count] = nop[count2];
				break;
			}
		}
	}
	return (n);
}
