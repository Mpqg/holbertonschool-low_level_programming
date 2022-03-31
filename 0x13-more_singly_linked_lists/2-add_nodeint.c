#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list_t list.
 * @n: numbers contained in the linked list
 * @head: linked list
 * Return: Always 0
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->next = *head;
	newnode->n = n;

	*head = newnode;
	return (newnode);
}
