#include "holberton.h"
/**
 * *print_chessboard - print the cheese
 *
 * @a : Pointer that is parameter in the function.
 * Return: Always pointer.
 */
void print_chessboard(char (*a)[8])
{
	int cnt;
	int cnt2;
	char aux;

	for (cnt = 0; cnt <= 7; cnt++)
	{
		for (cnt2 = 0; cnt2 <= 7; cnt2++)
		{
			aux = a[cnt][cnt2];
			_putchar(aux);
		}
		_putchar('\n');
	}

}
