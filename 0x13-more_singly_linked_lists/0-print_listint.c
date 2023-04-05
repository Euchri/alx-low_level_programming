#include "lists.h"

/**
 * print_listint: Function that prints all the elements of a list
 * @h: Pointer that points to the first element
 * Return: This returns the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodeA = 0;

	while (h != 0)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodeA++;
	}
	return (nodeA);
}
