#include "main.h"

/**
*_puts - prints a string
*@str: A pointer to an int that will be changed
*
*Return: void which means our answer is correct
*/

void _puts(char *str)
{
	int x = 0;

	while (str[x])
	{
		_putchar (str[x]);
		x++;
	}
	_putchar('\n');
}
