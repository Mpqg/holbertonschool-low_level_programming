#include "main.h"
/**
 * print_alphabet_x10 - alphabet in LC x 10 times
 *
 * Return: Always 0;
 */
void print_alphabet_x10(void)
{
	char x;
	int count;

	for (count = 0; count < 10; count++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
		_putchar(x);
		}
		_putchar('\n');
	}
}
