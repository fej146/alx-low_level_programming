#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node
 * @head: a double pointer
 * Return: 0
 */
int pop_listint(listint_t **head)
{
	int n;

	if (head == NULL)
		return (0);

	listint_t *temp = *head;
	*head = temp->next;
	n = temp->n;
	free(temp);
	return (n);
}
