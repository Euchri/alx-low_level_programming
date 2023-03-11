#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int mul;

	if (argc ! = 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;

	printf("%d%d: %d\n", num1, num2, mul);
	return (0);
}
