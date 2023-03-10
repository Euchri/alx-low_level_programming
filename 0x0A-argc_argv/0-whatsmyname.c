#include <stdio.h>

/**
 * main - Prints the name of the program
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argc;/*ignore unused parameter warning*/
	printf("%s\n", argv[0]);

	return (0);
}
