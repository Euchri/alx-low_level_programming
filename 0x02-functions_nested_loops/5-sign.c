#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the int to check
 * Return: 1 for positive number, -1 for negative number and zero for anything else  
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if  (n == 0)
	{
		_putchar(48);
		return (0);
	}
}
