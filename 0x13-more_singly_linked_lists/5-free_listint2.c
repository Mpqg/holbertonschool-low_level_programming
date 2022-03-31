#include "lists.h"

/**
 * free_listint2 - function that frees
 * @head: linked list
 * Return: Always 0
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head)
	{
		tmp = *head;
		*head = tmp->next;
		free(tmp);
	}
}
