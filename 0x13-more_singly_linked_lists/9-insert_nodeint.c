#include "lists.h"

/**
 * insert_nodeint_at_index - Function that will inser the
 * new node at declared position
 * @head: Pointer to the first node in the list
 * @idx: This is the index where the node will be added
 * @n: this is the node to be added
 * Return: This will return zero else returns address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *nodeAdded;
	listint_t *y;

	y = *head;
	if (idx != 0)
	{
		for (x = 0; x < idx - 1 && y != 0; x++)
			y = y->next;
	}
	if (y == 0 && idx != 0)
		return (0);
	nodeAdded = malloc(sizeof(listint_t));
	if (nodeAdded == 0)
		return (0);
	nodeAdded->n = n;
	if (idx == 0)
	{
		nodeAdded->next = *head;
		*head = nodeAdded;
	}
	else
	{
		nodeAdded->next = y->next;
		y->next = nodeAdded;
	}
	return (nodeAdded);
}
