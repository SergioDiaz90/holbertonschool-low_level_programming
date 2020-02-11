#include "holberton.h"
/**
 * _islower - check the code for Holberton School students.
 * @c: Variable initial of the function.
 * Return: print in number if character is lowercase or not.
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
