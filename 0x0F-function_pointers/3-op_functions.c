#include "3-calc.h"
#include <stddef.h>
#include <stdio.h>

/**
 * op_add - function for plus two integree.
 * @a: first number for operation.
 * @b: second number for operation.
 *
 * Return: integree.
 */

int op_add(int a, int b)
{
	int sum = a + b;

	return (sum);
}

/**
 * op_sub - function for rest two integree.
 * @a: first number for operation.
 * @b: second number for operation.
 *
 * Return: integree.
 */

int op_sub(int a, int b)
{
	int sub = a - b;

	return (sub);
}

/**
 * op_mul - function for mulp two integree.
 * @a: first number for operation.
 * @b: second number for operation.
 *
 * Return: integree.
 */

int op_mul(int a, int b)
{
	int mul = a * b;

	return (mul);
}

/**
 * op_div - function for division between two integree.
 * @a: first number for operation.
 * @b: second number for operation.
 *
 * Return: integree.
 */

int op_div(int a, int b)
{
	int div = a / b;

	return (div);
}

/**
 * op_mod - function for %  two integree.
 * @a: first number for operation.
 * @b: second number for operation.
 *
 * Return: integree.
 */

int op_mod(int a, int b)
{
	int mod = a % b;

	return (mod);
}
