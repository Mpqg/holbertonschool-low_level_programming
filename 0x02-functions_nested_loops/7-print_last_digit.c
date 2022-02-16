#include "main.h"

/**
* print_last_digit - computes the absolute value of an integer
* @n: the int to check
* Return: Always 0
*/
int print_last_digit(int n)
{
	int r;

	if (n < 0)
	n = -n;

	r = n % 10;

	if (r < 0)
	r = -r;

	_putchar(r + '0');

	return (r);
}
