#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a list_t list
 * @h: linked list to be printed
 * Return: Always 0
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	/**
	 * Reasign the variable h to the next user
	 * until there is no next user
	 */
	return (count);
}
