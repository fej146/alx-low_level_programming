#include "lists.h"
/**
 * sum_listint - sum of n number of data in lintint_t
 * @head: pointer to first node
 * Return: sum calculated
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr = NULL;

	ptr = head;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
