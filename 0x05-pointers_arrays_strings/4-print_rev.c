#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to print
 *
 * Return: Always O
 */
void print_rev(char *s)
{
	int x = 0;

	while (*(s + x))
		x++;
	x = x - 1;
	while (x >= 0)
	{
		_putchar(*(s + x));
		x--;
	}
	_putchar('\n');
}
