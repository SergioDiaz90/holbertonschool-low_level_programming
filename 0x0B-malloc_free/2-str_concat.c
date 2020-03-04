#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *str_concat - check the code for Holberton School students.
 * @s1: this is the first accountant.
 * @s2: this is the first accountant.
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, a, b;
	char *arr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a] != '\0'; a++)
		;
	for (b = 0; s2[b] != '\0'; b++)
		;

	arr = malloc(sizeof(char) * a + sizeof(char) * b + 1);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; *(s1 + i) != '\0'; i++)
	{
		arr[i] = *(s1 + i);
	}

	for (j = 0; *(s2 + j) != '\0'; i++, j++)
	{
		arr[i] = *(s2 + j);
	}
	arr[i] = '\0';
	return (arr);
}
