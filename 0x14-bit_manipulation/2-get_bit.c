#include "holberton.h"
/**
 * get_bit - return an bit.
 * @n: number.
 * @index: lenght of number.
 * Return: number in bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((index > sizeof(n) * 8 - 1) ? -1 : (int)(n >> index) & 1);
}
