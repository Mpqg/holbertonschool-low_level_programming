#include "main.h"

/**
 * root_square - Finds the square root of two numbers
 *
 * @a: The number
 * @b: The number to test for the square root of @a
 *
 * Return: Always 0
 */

int root_square(int a, int b)
{
	if (b * b > a)
		return (-1);

	else if (b * b == a)
		return (b);

	else
		return (root_square(a, b + 1));

	return (1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: the number to return the square root of
 *
 * Return: the square root of @n
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (root_square(n, 1));
}
