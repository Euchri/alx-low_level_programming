#include "lists.h"
/**
 * add_nodeint_end - This adds a node to the end of the list
 * @head: This is a pointer to the start of the list
 * @n: The nenode pointer
 * Return:This is the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *nodeA;
	newnode = malloc(sizeof(listint_t));
	
	if (newnode == 0)
		return (0);

	newnode->n = n;
	newnode->next = 0;
	nodeA = *head;
	
	if (nodeA == 0)
		*head = newnode;
	return (*head);
	
	while (nodeA->next != 0)
		nodeA = nodeA->next;
	nodeA->next = newnode;

	return (newnode);
}
