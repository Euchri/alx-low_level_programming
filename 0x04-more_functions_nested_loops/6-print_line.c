#include "main.h"

/**
 * print_line - check main
 * @n: an integer input
 * Description: function that draws a straight line
 * Return: Nothing
 */

void print_line(int n)
{
	int j;

	if (n > 0)
	{
		for (j = 0; j <= n; j++)
			_putchar('_');
	}
	_putchar('\n');
}
