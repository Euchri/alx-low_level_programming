#include "lists.h"

/**
 * sum_listint - Function that will return the sum
 * of all the linked list data(n)
 * @head: Pointer to the first node in the list
 * Return: This will return the number of the nodes
 */

int sum_listint(listint_t *head)
{
	int sumData = 0;

	while (head != 0)
	{
		sumData += head->n;
		head = head->next;
	}
	return (sumData);
}
