#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: to memory area
 * @src: from this array to copy
 * @n: n slices to copy
 * Return: Always 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
