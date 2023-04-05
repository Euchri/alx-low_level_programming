#include "lists.h"
 /**
  * free_listint2- Function that freesa list
  * @head: This is a pointer
  * Return: zero
  */
void free_listint2(listint_t **head)
{
	listint_t *nodeC;
	listint_t *temp;

	if (head != 0)
		nodeC = *head;

	while((temp = nodeC) != 0)
	{
		nodeC = nodeC->next;
		free(nodeC);
	}
	*head = 0;
}
