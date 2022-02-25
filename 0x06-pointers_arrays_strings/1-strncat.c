#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest:variable destination
 * @src: variable
 * @n: lenght
 * Return: char*
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, c;

	c = 0;
	for (i = 0; dest[i] != '\0'; i++)
	{
		c++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		if (i < n)
		{
			dest[c + i] = src[i];
		}
		else
		{
			break;
		}
	}
		dest[c + i] = '\0';
	return (dest);
}
