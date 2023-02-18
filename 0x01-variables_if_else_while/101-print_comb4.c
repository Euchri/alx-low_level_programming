#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c, d;

	a = 0;
	while (a < 1000)
	{
		b = a / 100;
		c = (a / 10) % 10;
		d = a % 100;
		if (b < c && c < d)
		{
			putchar(d + '0');
			putchar(c + '0');
			putchar(b + '0');
			if (a < 789)
			{
				putchar(',');
				putchar(' ');
			}
		}
		a++;
	}
	putchar('\n');
	return (0);
}
