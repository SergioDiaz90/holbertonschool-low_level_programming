#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int y;

	for (y = 0; y <= 99; y++)
	{
		putchar((y / 10) + '0');
		putchar((y % 10) + '0');
		if (y <= 98)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
