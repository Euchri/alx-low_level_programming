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

	while (*s != '\0')
	{
		s++;
	}
	s--;

	while (length > 0)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
