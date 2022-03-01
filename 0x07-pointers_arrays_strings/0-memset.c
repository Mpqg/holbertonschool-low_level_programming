#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: destination memory area
 * @b: src constant byte
 * @n: n to slice src
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
