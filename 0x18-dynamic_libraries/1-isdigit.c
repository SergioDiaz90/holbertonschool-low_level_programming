#include "holberton.h"
#include <stdio.h>
/**
 * _isdigit - check the digits 0 through 9.
 * @c:  variable initial of the function.
 * Return: print 1 if c is digit between 0 and 9 else 0 or no digit.
 */
int _isdigit(int c)
{

	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	return (0);
}
