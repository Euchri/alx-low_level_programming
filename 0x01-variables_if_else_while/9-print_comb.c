#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * Return: (0) success
 */
int main(void)
{
	int number;

	for (number = 48; number <= 57; number++)
	{
		putchar(number);
	}
	if (number == 57)
	{
		break;
	}
	putchar('\n');
	return (0);
}
