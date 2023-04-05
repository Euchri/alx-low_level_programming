#include "lists.h"

/**
 * listint_len: this is the length of the linked list
 * @h: this is the list printed
 * Return: returns the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nodeA = 0;
	if (h == 0)
		return (0);
	else if (h->next != 0)
	{
		nodeA++;
		h = h->next;
	}
	return (nodeA + 1);
}
