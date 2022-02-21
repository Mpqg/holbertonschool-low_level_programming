#include "main.h"

/**
* _puts - prints a string
*
* @str: string to print
*
* Return: Always 0
*/
void _puts(char *str)
{
	int x = 0;

	while (*(str + x))
	{
		_putchar(*(str + x));
		x++;
	}
	_putchar('\n');
}
