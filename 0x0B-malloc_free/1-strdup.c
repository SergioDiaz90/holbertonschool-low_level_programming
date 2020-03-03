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

	if (str == NULL)
	{
		return (NULL);
	}
	for (cnt = 0; str[cnt] != '\0'; cnt++)

	ptn = malloc(sizeof(char) * (cnt + 1));

	if (ptn == NULL)
		return (NULL);
	for (cnt2 = 0; cnt2 < cnt; cnt2++)
		ptn[cnt2] = str[cnt2];
	ptn[cnt2] = '\0';
	return (ptn);
}
