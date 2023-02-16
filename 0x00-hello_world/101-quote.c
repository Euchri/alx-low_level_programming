#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 *main - prints the exactly the line given
 *return: 0 if successful, otherwise return 1
 */
int main(void){
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
