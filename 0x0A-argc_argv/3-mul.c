#include <stdio.h>

/**
 * main - function general.
 *
 * @argc : Number of arguments for the function.
 * @argv : Array unidimentional of strings
 * Return: Always pointer.
 */

int main (int argc ,char *argv[])
{
	int rta;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		rta = atoi(argv[1]) * atoi(argv[2]);
		printf("d\n", rta);
		return (0);
	}
}
