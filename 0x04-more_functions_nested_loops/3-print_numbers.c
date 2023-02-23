#include "main.h"
#include <unistd.h>

/**
 * print_numbers - check main
 * Description: Write a function that prints the numbers, from 0 to 9
 * Return: Nothing
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
