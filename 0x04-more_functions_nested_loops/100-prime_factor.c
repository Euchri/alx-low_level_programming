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
       	unsigned long int  num = 612852475143;
	unsigned long int factor = 2;
	
	while (factor < num)
	{
		if (num % factor == 0)
		{
			num /= factor;
			factor = 2;
		}
		else
		{
			factor++;
		}
	}
	
	printf("The largest prime factor of 612852475143 is: %lu\n", num);
	
	return 0;
}
