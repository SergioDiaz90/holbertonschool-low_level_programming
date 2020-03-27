#include "holberton.h"
/**
 * clear_bit - settings bit and index in 0.
 * @n: number.
 * @index: lenght of number.
 * Return: succesful or failed.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int cnt, rta = 0;

	cnt = sizeof(n) * 8 - 1;

	for (; cnt >= 0; cnt--)
	{
		if (((n ^ m) >> cnt) & 1)
			rta++;
	}
	return (rta);
}
