#include "lists.h"

/**
 * print_listint: function that prints all the elements of a list
 * @h: it is a pointer that points to the first element
 * Return: it returns the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h != 0)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}
	printf("%d\n", h->n);
	return (num);
}
