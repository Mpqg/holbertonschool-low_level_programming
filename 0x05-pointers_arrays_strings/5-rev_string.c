#include "main.h"

/**
 * rev_string - string in reverse
 * @s: string to reverse
 *
 * Return: Always O
 */

void rev_string(char *s)
{
	int i, j, k, l, contador;

	char c[520];

	contador = 0;
	l = 1;
	for (i = 0 ; s[i] != '\0' ; i++)
	{
		contador++;
	}
	for (j = 0 ; j < contador ; j++)
	{
		c[contador - l] = s[j];
		l++;
	}
	for (k = 0; k < contador ; k++)
	{
		s[k] = c[k];
	}
}
