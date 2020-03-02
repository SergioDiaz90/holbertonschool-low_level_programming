#include <stdio.h>
#include <stdlin.h>
/**
 * main - function general.
 *
 * @argc : Number of arguments for the function.
 * @argv : Array unidimentional of strings
 * Return: Always int.
 */

int main(int argc, char **argv __attribute__((unused)))
{
	int count;

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
		}

		printf("%d\n", count);
	}
	else
	{
		printf("%d\n", 0);
	}

	return (0);
}
