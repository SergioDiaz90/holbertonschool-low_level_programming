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
		int three = numberCount % 3;
		int five = numberCount % 5;

		if ((three == 0) && (five == 0))
		{
			printf("FizzBuzz");
			putchar(' ');
		}
		else if (five == 0)
		{
			printf("Buzz");
			putchar(' ');
		}
		else if (three == 0)
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
