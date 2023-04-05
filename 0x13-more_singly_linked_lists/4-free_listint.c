#include "lists.h"

/**
 * free_list_int - TH efunction that frees linked list
 * @head: The pointer to the limked list
 * Return: zero
 */
void free_listint(listint_t *head)
{
	listint_t *nodeB;

	while ((nodeB = head) != 0)
		head =  head->next;
	free(nodeB);
}
