#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint - frees the memory allocated for list
 * @head: pointer to the head node
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
