#include "3-calc.h"

/**
 * op_add - adds two integers
 * op-sub_subtracts two integers
 * op_mul - multiply two integers
 * op_div -divides two integers
 * op_mod - calculates the modulus of two integers
 * @a: first integer
 * @b: second integer
 * Return: sum of two integers
 * Return: differences of two integers
 * Return: multiple of two integers
 * Return: quotient of two integers
 * Return: modulo of two integers
 */

int op_add(int a, int b)
{
	return (a + b);
}

int op_sub(int a, int b)
{
	return (a - b);
}

int op_mul(int a, int b)
{
	return (a * b);
}

int op_div(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

int op_mod(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
