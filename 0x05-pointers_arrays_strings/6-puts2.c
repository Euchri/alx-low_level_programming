#include "main.h"

/**
 *puts2 - prints every character of a string
 *@s: the pointer points to a char
 *Return: void which means it is correct
 */

void puts2(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (x % 2 == 0)
		{
			_putchar(s[x]);
		}
	}
	_putchar('\n');
}
