#include "main.h"

/**
 *  puts_half - prints half of a string
 *  @str: text
 */
void puts_half(char *str)
{
	int i, c;

	c = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		c++;
	}

	if (c % 2 == 0)
	{
		int n = c / 2;

		for (; n < c; n++)
		{
			_putchar(str[n]);
		}
	}
	else
	{
		int n = (c - 1) / 2;

		for (; n < c; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
