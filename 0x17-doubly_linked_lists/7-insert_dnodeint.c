#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: pointer to head of a list
 * Return: number of elements in a linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temporal = h;

	while (temporal)
	{
		count++;
		temporal = temporal->next;
	}
	return (count);
}

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the head of a linked list
 * @idx: is the index  where new node should be entered
 * @n: the data to put into the new node
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *temporal = *h;
	unsigned int counter = 0;
	size_t length = dlistint_len(*h);

	if (idx > length)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (length == idx)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	while (counter < idx - 1)
	{
		temporal = temporal->next;
		counter++;
	}

	new_node->n = n;
	new_node->next = temporal->next;
	new_node->prev = temporal;
	temporal->next->prev = new_node;
	temporal->next = new_node;
	return (new_node);
}
