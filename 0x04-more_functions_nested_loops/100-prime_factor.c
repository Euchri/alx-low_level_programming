#include<stdio.h>
#include <stdlib.h>

/**
 * _sqrt - finds the square root
 *
 * @x: input number
 *
 * Return: square root of x
 *
*/

int main(void)
{
       	long int  num = 612852475143;
	long int factor = 2;
	
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
	
	printf("The largest prime factor of 612852475143 is: %ld\n", factor);
	
	return 0;
}
