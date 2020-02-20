#include "holberton.h"
#include <stdio.h>
/**
 * *string_toupper - plus two strings
 * @i : pointer
 * Return: Always dest.
 */
char *string_toupper(char *i)
{
	int count;
	int aux;

	for (count = 0; count < i; count++)
	{
		if (i[count] < 96 && i[count] > 123)
		{
			aux = i[count];
			aux = aux - 32;
			i[count] = aux;
		}
	}
	return (i);
}
