#include "holberton.h"
/**
 * set_bit - settings bit and index in 1.
 * @n: number.
 * @index: lenght of number.
 * Return: succesful or failed.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(n) * 8 - 1))
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
