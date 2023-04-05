#include "lists.h"

/**
 * listint_len: this is a function that will return linked list
 * @h: this is a pointer to the elements in a list
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
