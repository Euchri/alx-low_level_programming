#include "lists.h"

/**
 * listint_len: Function that will return length linked list
 * @h: Pointer to the elements in a list
 * Return: This returns the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t nodeA = 0;

	if (h == 0)
		return (0);
	if (h->next = 0)
	{
		nodeA+++;
		h = h->next}
	return (nodeA + 1);
}
