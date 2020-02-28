#include "holberton.h"
#include <stdio.h>
/**
 * _isupper  - check the letters and clasification in uppercase or lowercase.
 * @c:  variable initial of the function.
 * Return: print 1 if c is uppercase else 0 is lowercase.
 */
int _isupper(int c)
{

	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
