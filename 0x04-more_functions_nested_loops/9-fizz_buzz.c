#include <stdio.h>
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
		if (numberCount % 3 == 0 && numberCount % 5 == 0)
		{
			printf("FizzBuzz");
			putchar(' ');
		}
		else if (numberCount % 5 == 0)
		{
			printf("Buzz");
			putchar(' ');
		}
		else if (numberCount % 3 == 0)
		{
			printf("Fizz");
			putchar(' ');
		}
		else
		{
			printf("%d", numberCount);
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
