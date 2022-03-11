#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function allocates an array
 * @size: size of each element
 * @nmemb: number of members
 *
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0;
	char *s;

	if (nmemb == 0 || size == 0)
		return ('\0');

	s = malloc(size * nmemb);
	if (!s)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		s[i] = 0;

	return ((void *)s);
}
