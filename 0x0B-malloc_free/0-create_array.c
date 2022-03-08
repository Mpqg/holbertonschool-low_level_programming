#include "main.h"
#include <stdio.h>
/**
 * create_array - creates an array of chars
 * @size: the size of the memory to print
 * @c: characters
 *
 * Return: Always 0
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);
	int i;
	char *array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
