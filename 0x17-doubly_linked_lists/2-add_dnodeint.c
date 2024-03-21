#include "lists.h"

/**
 *add_dnodeint - add anode at the beginning of a d_list
 *
 *@head: double pointer of the list/to the list
 *
 *Return: pointer to the new list
 *@n: data of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new =  malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	new->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = new;
	}
	*head = new;
	return (*head);
}
