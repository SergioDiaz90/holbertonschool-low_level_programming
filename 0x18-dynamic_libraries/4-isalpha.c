#include "holberton.h"
/**
 * _isalpha - check the code for Holberton School students.
 * @c: Variable initial of the function.
 * Return: print in number if character is lowercase or not.
 */
int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
