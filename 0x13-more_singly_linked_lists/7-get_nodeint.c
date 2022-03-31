#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * @head: linked list
 * @index: nth node
 * Return: Always 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
			return (current);

		count++;
		current = current->next;
	}
	return (NULL);
}
