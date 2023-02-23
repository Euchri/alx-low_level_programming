#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - entry point
 * Description: prints numbers from 0 to 9, skip 2 and 4
 * Return: 0
*/

void print_most_numbers(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		if (x != '2' && x != '4')
			_putchar(x);
	}
	_putchar('\n');
}
