#include "lists.h"

/**
 * add_node_end - a new node at the end of a list_t list
 * @str: name of a person
 * @head: linked list
 * Return: Always 0
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *lastnode;
	int count = 0;

	newnode = (list_t *)malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	newnode->next = NULL;
	newnode->str = strdup(str);

	while (str[count])
		count++;

	newnode->len = count;
	lastnode = *head;
	if (lastnode == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	while (lastnode->next != NULL)
		lastnode = lastnode->next;
	lastnode->next = newnode;
	return (newnode);
}
