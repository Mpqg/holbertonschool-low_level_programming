#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: type char str.
 * @s2: type char str
 * @n: size in bytes of s2
 * Return: Always 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i;
	unsigned int j;
	char *concat;
	unsigned int len1 = 0;
	unsigned int len2 = 0;

	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		concat = malloc(sizeof(char) * (len1 + n + 1));
	else
		concat = malloc(sizeof(char) * (len1 + len2 + 1));

	if (concat == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concat[i] = s1[i];

	if (n >= len2)
	{
		for (j = 0; s2[j]; j++)
			concat[i + j] = s2[j];
	}
	else
	{
		for (j = 0; j < n; j++)
			concat[i + j] = s2[j];
	}
	return (concat);
}