#include <stdio.h>
/**
 * main - entry point
 * Return: 0 if successful
 */
int main(void)
{
	printf("size of a char: 1 byte(s)", sizeof(char));
	printf("size of an int: 4 byte(s)", sizeof(int));
	printf("size of a long int: 8 byte(s)", sizeof(long int));
	printf("size of a long long int: 8 byte(s)", sizeof(long long int));
	printf("size of a float: 4 byte(s)", sizeof(float));
	return (0);
}
