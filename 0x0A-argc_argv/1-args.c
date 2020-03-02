#include <stdio.h>
#include <stdlib.h>
/**
 * main - function general.
 *
 * @argc : Number of arguments for the function.
 * @argv : Array unidimentional of strings
 * Return: Always int.
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%i\n", argc - 1);
	return (0);
}
