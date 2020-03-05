#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - plus two strings.
 * @s1 : first string.
 * @s2 : second string.
 * @n  : size s2.
 * Return: Always pointer concat.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int lenght, cnt, cnt2;
	unsigned int cnt3 = 0;
	char *aux = NULL;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (cnt = 0; s1[cnt] != '\0'; cnt++)
		;
	for (cnt2 = 0; cnt2 < n ; cnt2++)
		;
	if (n > cnt2)
		n = cnt2;

	lenght = (cnt + 1) + cnt2;
	aux = malloc(sizeof(char) * lenght);
	cnt2 = 0;

	if (aux == NULL)
		return (NULL);

	for (cnt2 = 0; cnt2 < (lenght - 1); cnt2++)
	{
		if ((s1[cnt2] != '\0') && (cnt2 < cnt))
		{
			aux[cnt2] = s1[cnt2];
		}
		else
		{
			aux[cnt2] = s2[cnt3];
			cnt3++;
		}
	}
	aux[cnt2] = '\0';
	return (aux);
}
