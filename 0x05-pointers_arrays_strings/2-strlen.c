#include "main.h"

/**
* _strlen - retuns the length of a string
*
* @s: string to find the length
*
* Return: Always 0
*/
int _strlen(char *s)
{
	int x = 0;

	while (*(s + x))
	x++;
	return (x);
}
