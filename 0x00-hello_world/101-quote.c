#include <stdio.h>
#include <unistd.h>
/**
 * main - prints the string to the standard error
 * return: 0 if successful
 */
int main(void)
{
	write(2, "and the piece of art is useful\" - Dora Korpar, 2015-10-19\n" 59);
	return(1);
}
