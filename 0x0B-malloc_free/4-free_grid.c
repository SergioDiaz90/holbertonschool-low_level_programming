#include "holberton.h"
#include <stdlib.h>
/**
 * *free_grid - check the code for Holberton School students.
 * @grid: this is the first accountant.
 * @height: this is the first accountant.
 * Return: Always 0.
 */

void free_grid(int **grid, int height)
{
	int c;

	for (c = 0; c < height; c++)
	{
		free(grid[c]);
	}
	free(grid);
}
