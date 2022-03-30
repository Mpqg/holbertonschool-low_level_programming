#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @str: name of a person
 * @head: linked list
 * Return: Always 0
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	int count = 0;

	newnode = (list_t *)malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	newnode->next = *head;
	newnode->str = strdup(str);

	while (str[count])
		count++;

	newnode->len = count;
	*head = newnode;

	return (newnode);
}
