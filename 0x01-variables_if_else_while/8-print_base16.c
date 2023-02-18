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

	i='a';
	for (ch = 0; ch < 10; ch++)
	{
		putchar(ch + '0');
	}
	for (ch = 10; ch <= 15; ch++)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
