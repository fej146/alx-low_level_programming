#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: head of node linklist
 * Return: the number of nodes created
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0; /*for the count of the nodes*/

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
