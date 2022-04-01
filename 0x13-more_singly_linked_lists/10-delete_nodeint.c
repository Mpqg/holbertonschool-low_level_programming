#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: linked list
 * @index: index, position given to insert the new node
 * Return: Always 0
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *current;
	unsigned int currentIndex;

	tmp = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	for (currentIndex = 0; currentIndex < (index - 1); currentIndex++)
	{
		if (tmp == NULL || (tmp->next == NULL))
			return (-1);

		tmp = tmp->next;
	}

	current = tmp->next;
	tmp->next = current->next;
	free(current);
	return (1);
}
