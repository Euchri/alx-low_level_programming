#include <stddef.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
* int_index - searches for  an integer from an array
* @array: array of integers
* @size: size of array
* @cmp: function used to find integer
* Return: integer or 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}