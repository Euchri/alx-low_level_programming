#include "main.h"
/**
 * print_rev - prints a string in reverse order
 *@s: A pointer to an int that will be changed
 *
 *Return: void which means our answer is correct
 */

void print_rev(char *s)
{
	int length = 0;

	while (s[length])
	{
		_putchar(s[length]);
		length--;
	}

	_putchar('\n');
}
