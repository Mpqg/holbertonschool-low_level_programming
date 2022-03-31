#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * @head: linked list
 * Return: Always 0
 */
int pop_listint(listint_t **head)
{
	listint_t *children, *tmp;
	int n;

	if (!(*head))
		return (0);

	tmp = *head;
	children = (*head)->next;
	*head = children;

	n = tmp->n;
	free(tmp);

	return (n);
}
