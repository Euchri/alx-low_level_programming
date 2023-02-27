#include "main.h"

/**
 * rev_string - prints a reverse string
 *@s: A pointer to an int that will be changed
 *
 *Return: void
 */

void rev_string(char *s)
{
	int length = 0;
	int i = 0;
	char strng;

	while (s[i++])
		length++;
	
	for (i = length - 1; i >= length / 2; i--)
	{
		strng = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = strng;
	}
}

