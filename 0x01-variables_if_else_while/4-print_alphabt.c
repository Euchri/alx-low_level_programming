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

	for (char ch = 'a'; ch = 'z'; ch++)
		putchar(ch);
	for (char ch != 'q', 'e')
		putchar(ch);
	putchar('\n');
	return (0);
}

