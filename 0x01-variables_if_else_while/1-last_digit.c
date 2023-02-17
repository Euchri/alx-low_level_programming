#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 20 > 5)
		printf("Last digit of %d is %d annd is greater than 5\n", n, n%20);
	else if (n == 0)
		printf("Last digit of %d is %d and is equal to 0\n", n, n%20);
	else if (n < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n%20);
	return (0);
}
