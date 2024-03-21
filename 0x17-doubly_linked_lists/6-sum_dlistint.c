#include "lists.h"

/**
 * sum_dlistint - calculates the sum of all the data (n)
 *
 * @head: pointer to the head node
 *
 * Return: the sum of all the data (n)
 */
int sum_dlistint(dlistint_t *head)
{
	size_t sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
