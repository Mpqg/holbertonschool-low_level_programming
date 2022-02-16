#include "main.h"

/**
* print_last_digit - computes the absolute value of an integer
* @n: the int to check
* Return: Always 0
*/
int print_last_digit(int n)
{
	if (n < 0)
	{
		return (-n % 10);
	}
			return (n % 10);
}
