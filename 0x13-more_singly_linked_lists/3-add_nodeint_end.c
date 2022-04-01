#include "lists.h"

/**
 * add_nodeint_end - a new node at the end
 * @n: numbers contained in the linked list
 * @head: linked list
 * Return: Always 0
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *lastnode;

	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->next = NULL;
	newnode->n = n;
	lastnode = *head;

	if (lastnode == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	while (lastnode->next != NULL)
		lastnode = lastnode->next;
	lastnode->next = newnode;
	return (newnode);
}
