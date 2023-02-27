#include "main.h"
#include <stdio.h>

/**
 *print_array - prints n elements of an array of integers
 *@a: A pointer to an int that will be updated/ changed
 *@n: return value n
 *Return: void which ,means our answer is correct
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);

		if (j == n -1)
			continue;
		printf(", ");
	}
	printf("\n");
}
