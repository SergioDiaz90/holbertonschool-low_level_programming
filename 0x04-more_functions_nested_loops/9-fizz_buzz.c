#include <stdio.h>
#include "holberton.h"
/**
 * main - print solution FizzBuzz.
 * numberCount: variable initial of the function.
 * Return: col of numbers 0 to 9 followed by a new line.
 */
int main(void)
{
	int numberCount;

	for (numberCount = 1; numberCount <= 100; numberCount++)
	{
		int three = numberCount % 3 == 0;
		int five = numberCount % 5 == 0;

		if (three && five)
		{
			printf("FizzBuzz");
			putchar(32);
		}
		else if (five)
		{
			printf("Buzz");
			putchar(32);
		}
		else if (three)
		{
			printf("Fizz");
			putchar(32);
		}
		else
		{
			printf("%d", numberCount);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
