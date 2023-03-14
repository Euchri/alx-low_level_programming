#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 *           containing a copy of the string given as parameter.
 * @str: The string to be copied.
 * Return: If str == NULL or insufficient memory is available - NULL.
 *         Otherwise - a pointer to the duplicated string.
 */

char *_strdup(char *str)
{

	size_t len = strlen(str) + 1;
	char *copy = (char *) malloc(len);

	if (str == NULL)
		return (NULL);

	if (copy == NULL)
	{
		return (NULL);
	}
	memcpy(copy, str, len);
	return (copy);
}
