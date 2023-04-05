#include "lists.h"

/**
 * get_nodeint_at_index - Function that returns the nth node
 * of a linked list
 * @head: this is a pointer to the first node in a linked list
 * @index:This represents the index of a node
 * Return: this will return the nth node else returns zero
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nodeA;
	listint_t *nodeB;

	nodeA = 0;
	nodeB = head;

	if (!(nodeB))
		return (0);

	while (nodeB != 0)
	{
		if (nodeA == index)
			return (nodeB);
		nodeA++;
		nodeB = nodeB->next;
	}
	return (nodeB);
}
