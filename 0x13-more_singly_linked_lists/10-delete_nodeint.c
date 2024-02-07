#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: double pointer
 * @index: index of node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr = *head;
	listint_t *prev = *head;

	if (*head == NULL)
		return (-1);
	else if  (index == 1)
	{
		*head = curr->next;
		free(curr);
		curr = NULL;
		return (1);
	}
	else
	{
		while (index != 1)
		{
			prev = curr;
			curr = curr->next;
			index--;
		}
		prev->next = curr->next;
		free(curr);
		curr = NULL;
		return (1);
	}
}
