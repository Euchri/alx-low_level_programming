#include "lists.h"

/**
 * pop_listint - Function that deletes the head node of linked list
 * @head: Pointer that points to first node
 * Return: returns the nodes data
 */

int pop_listint(listint_t **head)
{
	listint_t *dataNode;
	listint_t *nodeA;

	int listNode;

	if (*head == 0)
		return (0);
	nodeA = *head;
	listNode = nodeA->n;
	dataNode = nodeA->next;
	free(nodeA);
	*head = dataNode;

	return (listNode);
}
