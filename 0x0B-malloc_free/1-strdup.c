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
	char *arr = NULL;
	int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	arr = malloc(sizeof(char) * i + 1);
	if (arr == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
	{
		arr[j] = str[j];
	}
	arr[j] = '\0';
	return (arr);
}
