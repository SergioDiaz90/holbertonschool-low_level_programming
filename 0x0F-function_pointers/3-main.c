#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - function for calc.
 * @argc: Number arguments.
 * @argv: Array elements.
 * Return: integree.
 */

int main(int argc, char argv[])
{
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*' &&
	     argv[2][0] != '/' && argv[2][0] != '%') || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if (num2 == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", (get_op_func(argv[2])(num1, num2)));

	return (0);
}
