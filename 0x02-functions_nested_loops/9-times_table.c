#include "holberton.h"
/**
 * times_table - check the code for Holberton School students.
 * x:variable.
 * num1: variable of numbers.
 * Return: print 9 times.
 */
void times_table(void)
{
	int i, n, pTens, pOnes, lineTotal;

	i = 0;
	pTens = 0;
	pOnes = 0;
	while (i < 10)
	{
		n = 0;
		lineTotal = 0;
		while (n < 10)
		{
			lineTotal = n * i;

			pOnes = lineTotal % 10;
			pTens = (lineTotal - pOnes) / 10;
			if (pTens == 0 && n > 0)
				_putchar(' ');
			else if (n > 0)
				_putchar(pTens + '0');
			_putchar(pOnes + '0');
			if (n == 9)
				break;
			_putchar(',');
			_putchar(' ');
			n++;
		}
		_putchar('\n');
		i++;
	}
}
