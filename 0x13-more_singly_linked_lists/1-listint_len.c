#include "lists.h"
#include <stdio.h>

/**
 * listint_len - the number of elements in a linked listint_t list
 * @h: head of node linklist
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0; /*for the count of the nodes*/

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
