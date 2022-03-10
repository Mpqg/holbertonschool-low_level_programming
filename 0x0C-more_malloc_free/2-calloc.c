#include "main.h"
#include <stdlib.h>

/**
 * calloc - function
 * @size: size of each element
 * @nmemb: number of members
 *
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;

	if (nmemb == 0 || size == 0)
		return ('\0');

	s = malloc(size * nmemb);
	if (!s)
		return (NULL);
	return (s);
}
