#include <stdio.h>

/**
 * main - function general.
 *
 * @argc : Number of arguments for the function.
 * @argv : Array unidimentional of strings
 * Return: Int.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}

	return (0);
}
