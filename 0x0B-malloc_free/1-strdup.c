#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - creation of one array with characters.
 * @str: pointer with the string to copy.
 *
 * Return: pointer.
 */

char *_strdup(char *str)
{
	char *ptn;

	if (str != NULL)
	{
		int cnt;

		int aux = sizeof(str);

		ptn = malloc(sizeof(char) * (aux + 2));

		for (cnt = 0; cnt <= aux; cnt++)
		{
			ptn[cnt] = str[cnt];
		}
		ptn[cnt] = '\0';
	}
	else
	{
		return (NULL);
	}
	return (ptn);
}
