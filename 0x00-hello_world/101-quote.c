#include <stdio.h>

/**
 *main - print string
 *Description: print str
 *Return: 1
*/

int main(void)
{
	char str[59] = "and that piece of art ls useful\" - Dora Korpar, 2015-10-19\n";
	int cnt;

	for (cnt = 0; cnt < 59; cnt++)
		putchar(str[cnt]);

	return (1);
}
