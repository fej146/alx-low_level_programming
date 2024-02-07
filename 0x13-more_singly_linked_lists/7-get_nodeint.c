#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node
 * of a listint_t linked list
 * @head: pointer to first node
 * @index: index of the node, starting at 0
 * Return: pointr to index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;

	if (head == NULL)
		return (NULL);
	while (n < index)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
		n++;
	}
	return (head);
}
