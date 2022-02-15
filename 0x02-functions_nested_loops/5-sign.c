#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: value for validate
 * Return: Always 0;
 */
int print_sign(int n)
{
	if (n > 0)
	{
		-putchar('+');
		return (1);
	}
	if (n == 0)
	{
	_putchar(48);
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}
