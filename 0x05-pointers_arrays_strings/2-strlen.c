#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: character to check
 * Return: always 0
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		_putchar(*s);
		length++;
	}
	return (length);
}
