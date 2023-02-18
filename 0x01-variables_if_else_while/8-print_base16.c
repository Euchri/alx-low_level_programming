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
	char i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (ch = 10; ch <= 15; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
