#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int cnt, cnt2;

	for (cnt = '0'; cnt <= '8'; cnt++)
	{
		for (cnt2 = cnt + 1; cnt2 <= '9'; cnt2++)
		{
			if (cnt != cnt2)
			{
				putchar(cnt);
				putchar(cnt2);
				if (cnt != '8' || cnt2 != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
