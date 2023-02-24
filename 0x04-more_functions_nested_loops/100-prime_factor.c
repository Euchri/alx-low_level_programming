#include<stdio.h>
#include <stdlib.h>

#include <stdio.h>

/**
 * main - print largest prime factor of 612852475143
 * Return: 0 on success
 */

int main(void)
{
	unsigned long num = 612852475143;
	unsigned long factor = 2;
	
	while (num > 1)
	{
		if (num % factor == 0)
		{
			num /= factor;
		}
		else
		{
			factor++;
		}
	}
	printf("The largest prime factor of 612852475143 is: %lu\n", num);
	return 0;
}
