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
	int cnt;
	int cnt2;
	int aux = sizeof(str);

	if (str != NULL)
	{

		for (cnt = 0; cnt <= aux; cnt++)

		ptn = malloc(sizeof(char) * (cnt + 1));

		for (cnt2 = 0; str[cnt2] != '\0'; cnt2++)
		{
			ptn[cnt2] = str[cnt2];
		}
		ptn[cnt2] = '\0';
	}
	else
	{
		return (NULL);
	}
	return (ptn);
}
