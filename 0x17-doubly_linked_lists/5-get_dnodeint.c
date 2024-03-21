#include "lists.h"

/**
 * get_dnodeint_at_index - returns a nth node of the linked list
 *
 * @head: pointer to the node
 *
 * @index: position of the node to be returned
 *
 * Return: return a pointer to the node at a prticular index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t itr = 0;

	for (itr = 0; itr < index; itr++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
