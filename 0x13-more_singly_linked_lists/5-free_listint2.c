#include "lists.h"
 /**
  * free_listint2- Function that freesa list
  * @head: This is a pointer
  * Return: zero
  */
void free_listint2(listint_t **head)
{
	listint_t *nodeC;
	listint_t *tempA;

	if (head != 0)
		nodeC = *head;

	while ((tempA = nodeC) != 0)
	{
		nodeC = nodeC->next;
		free(tempA);
	}
	*head = 0;
}
