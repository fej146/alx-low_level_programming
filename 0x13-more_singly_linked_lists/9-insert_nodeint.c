#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts new node at given postion
 * @head: double pointer to 1st node
 * @idx: position of the node
 * @n: new node value
 *
 * Return: the address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = *head;
	listint_t *ptr2 = malloc(sizeof(listint_t));
	
	ptr2->n = n;
	ptr2->next = NULL;

	idx--;
	while (idx != 1)
	{
		ptr = ptr->next;
		idx--;
	}
	ptr2->next = ptr->next;
	ptr->next = ptr2;
}
