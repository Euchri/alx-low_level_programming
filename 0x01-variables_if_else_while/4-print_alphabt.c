#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: (0) success
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		if (ch != 'e' && != 'q')
			putchar(ch);
	putchar('\n');
	return (0);
}

