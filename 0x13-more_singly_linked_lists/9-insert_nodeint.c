#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @n: numbers contained in the linked list
 * @head: linked list
 * @idx: index, position given to insert the new node
 * Return: Always 0
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *tmp;
	unsigned int current;

	tmp = *head;

	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL || head == NULL)
		return (NULL);

	newnode->next = NULL;
	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	for (current = 0; tmp && current < idx; current++)
	{
		if (current == (idx - 1))

		{
			newnode->next = tmp->next;
			tmp->next = newnode;
			return (newnode);
		}
		else
			tmp = tmp->next;
	}

	return (NULL);
}
