#include <stdio.h>
/**
 * main - Prints the name of the program
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;  /*Ignore unused parameter warning*/
	printf("%d\n", argc - 1);
	return (0);
}
