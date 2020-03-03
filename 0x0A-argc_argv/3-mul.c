#include <stdio.h>
#include <stdlib.h>
/**
 * main - function general.
 *
 * @argc : Number of arguments for the function.
 * @argv : Array unidimentional of strings
 * Return: Always pointer.
 */
int main(int argc __attribute__((unused)), char **argv)
{
	if (argv[2] == '\0' || argv[1] == '\0')
	{
		printf("Error\n");
		return (1);
	}

	printf("%i\n", ((atoi(argv[1])) * (atoi(argv[2]))));
	return (0);
}
