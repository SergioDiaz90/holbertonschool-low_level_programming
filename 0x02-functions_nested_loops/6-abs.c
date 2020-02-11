#include "holberton.h"
/**
 * _abs - check the code for Holberton School students.
 * @x:  variable initial of the function.
 * Return: print values absolute.
 */
int _abs(int x)
{
	if (x < 0)
	{
		x = x * -1;
	}
	return (x);
}
