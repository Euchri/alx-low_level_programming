#include "lists.h"

/**
 * delete_nodeint_at_index - Function that will delete the node
 * @head: Pointer to the first node in a list
 * @index: The index where node will be deleted
 * Return: This will reurn -1 if failure occurs
 * and 1 if successfull
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x;
	listint_t *nodePrev;
	listint_t *nodeNext;

	nodePrev = *head;
	if (index != 0)
	{
		for (x = 0; x < index - 1 && nodePrev != 0; x++)
			nodePrev = nodePrev->next;
	}
	if (nodePrev == 0 || (nodePrev->next == 0 && index != 0))
	{
		return (-1);
	}
	nodeNext = nodePrev->next;
	if (index != 0)
	{
		nodePrev->next = nodeNext->next;
		free(nodeNext);
	}
	else
	{
		free(nodePrev);
		*head = nodeNext;
	}
	return (1);
}
