#include "holberton.h"
/**
 * print_binary - convert binary in decimal.
 * @n: number.
 * Return: nothing.
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp = n;
	int cnt = 0;

	if (n == 0)
	{
		printf("0");
		return;
	}
	while ((temp >>= 1) > 0)
		cnt++;

	for (; cnt >= 0; cnt--)
	{
		((n >> cnt) & 1) ? printf("1") : printf("0");
	}
}
