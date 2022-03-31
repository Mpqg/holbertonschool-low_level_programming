#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the number of elements in a linked list_t list.
 * @h: linked list to be printed
 * Return: Always 0
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
