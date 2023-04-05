#include "lists.h"

/**
 * reverse_listint - Function that returns reversed list
 * @head: Pointer to the first node in alist
 * Return: This will return the first node reversed
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *tempNode, *nodeA;

	tempNode = 0;
	nodeA = 0;

	while (*head != 0)
	{
		nodeA = *head;
		*head = (*head)->next;
		nodeA = tempNode;
		tempNode = nodeA;
	}
	*head = nodeA;
	return (*head);
}
