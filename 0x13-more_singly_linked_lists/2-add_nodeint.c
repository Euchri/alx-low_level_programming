#include "lists.h"

/**
 * add_nodeint: This adds new nodes to linked list
 * @head: The head is equals to the first node
 * @n: This is the new node added
 * Return: This returns the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	/*insert node at the beginning*/
	int dataB;
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == 0)
		return (0);
	dataB = n;
	newnode->n = dataB;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
