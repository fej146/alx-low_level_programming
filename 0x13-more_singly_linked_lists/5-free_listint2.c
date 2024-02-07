#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees the memory allocated for list
 * @head: pointer to the head node
 * Return: 0
 */
void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}
