#include "lists.h"

/**
 * listint_len: Function that will return linked list
 * @h: Pointer to the elements in a list
 * Return: This returns the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t nodeA = 0;

	while (h != 0)
	{
		printf("%d\n", h->n;
		h = h->next;
		nodeA++;
	}
	return (nodeA);
}
