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
	int y = 0;
	char strng;

	while (*(s + 1) != '\0')
		length += 1;
	length -= 1;

	while (strng < length)
	{
		strng = s[length];
		s[length] = s[strng];
		s[strng] = strng;
		strng++;
		length--;
	}
}

