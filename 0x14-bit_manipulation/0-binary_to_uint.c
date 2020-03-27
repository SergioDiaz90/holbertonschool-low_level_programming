#include "holberton.h"
/**
 * binary_to_uint - convert binary in decimal.
 * @b: pointer of number.
 * Return: unsigned int number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int exp = 1, rta;
	int size = 0;

	if (!b)
		return (0);
	while (b[size])
	{
		size++;
	}
	size -= 1;
	for (rta = 0, exp; size >= 0; size--, exp *= 2)
	{
		if (b[size] != '0' && b[size] != '1')
			return (0);
		if (b[size] == '1')
			rta += exp;
	}
	return (rta);
}
