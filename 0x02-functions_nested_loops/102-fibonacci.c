#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the first 50 fibionacci numbers, staring with 1 and 2
 * Return: Always 0
 */

int main(void)
{
	long int x = 0, y = 1, z;
	int n;
	
	for (n = 0; n < 50; n++)
	{
		z = x + y;
		if (n == 0)
			printf("%ld", z);
		else
			printf(", %ld", z);
		x = y;
		y = z;
	}
	putchar('\n');
	return (0);
}
