#include "lists.h"

/**
 * sum_listint - returns the sum of all the data
 * @head: linked list
 * Return: Always 0
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp = head;
	int sum = 0;

	while (tmp != NULL)
	{
		sum = sum + tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
