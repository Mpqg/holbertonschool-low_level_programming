#include "main.h"

/**
 * squareroot - square root of 2 numbers
 * @a: number
 * @b: number to test
 *
 * Returns: Always 0
 */

int squareroot(int a, int b)
{
	if (b * b > a)
		return (-1),
			   if (b * b == a) return (b);
	return (squareroot(a, b + 1));
}

#include "main.h"

/**
 * _sqrt_recursion -   returns the natural square root of a number.
 *
 * @n: number to return root
 * Return: Always 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (squareroot(n, 0));
}
