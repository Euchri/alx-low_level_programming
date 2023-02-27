#include "main.h"

/**
 * _strcpy - Copies a string
 * @dest: Pointer to the string array for copying
 * @src: Number of elements to extract
 * Return: The dest pointer
*/

char *_strcpy(char *dest, char *src)
{
	int x;

	while (src[x] != '\0')
	{
		dest[x] = src[x];
			x++;
	}
	dest[x] = '\0';
	return (dest);
}
