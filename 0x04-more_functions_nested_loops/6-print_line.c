#include "main.h"

/**
 * print_line - check main
 * @n: an integer input
 * Description: function that draws a straight line
 * Return: Nothing
 */
void print_line(int n)
{
	int lines = n;
	
	for (lines = n; lines > 0; lines--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
