#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - Print sum of two diagonals of a square matrix of integers
 * @a: Matrix
 * @size: Size of the matrix
 *
 *
 */
void print_diagsums(int *a, int size)
{
	int x, y;
	int sum = 0;
	int sum2 = 0;
	int counter = 0;

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			if (x == y)
				sum = sum + a[counter];
			if (x + y == size - 1)
				sum2 = sum2 + a[counter];
			counter++;
		}
	}
	printf("%d, ", sum);
	printf("%d", sum2);
	putchar('\n');
}
