#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Adds positive numbers
 * @argc: Argument function count
 * @argv: Argument function vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	int cnt, cnt2, res = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (cnt = 1; cnt < argc; cnt++)
	{
		for (cnt2 = 0; argv[cnt][cnt2]; cnt2++)
			if (!isdigit(argv[cnt][cnt2]))
			{
				printf("Error\n");
				return (1);
			}
		res += atoi(argv[cnt]);
	}
	printf("%i\n", res);
	return (0);
}
