#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees the memory allocated for list
 * @head: pointer to the head node
 * Return: 0
 */
void free_listint2(listint_t **head)
{
	listint_t *link;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		link = (*head)->link;
		free(*head);
		*head = link;
	}
}
