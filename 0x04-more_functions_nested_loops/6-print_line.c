#include "main.h"
/**
* print_line - draw a straight line
* @n: integer 1
*/
void print_line(int n)
{
	int c;

	for (c = 0; c < n; c++)
		_putchar('_');
	_putchar('\n');
}
