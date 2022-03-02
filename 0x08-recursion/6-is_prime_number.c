#include "main.h"

/**
 * prime - searches for if a number is prime
 *
 * @a: the number to check
 * @b: the numbers we'll go through
 *
 * Return: Always 0
 */

int prime(int a, int b)
{
	if (a <= 1 || a % b == 0)
		return (0);
	else if (a == b)
		return (1);
	else if (a > b)
		prime(a, b + 1);

	return (1);
}

/**
 * is_prime_number - tells us if an integer is a prime number or not
 *
 * @n: the number to check
 *
 * Return: 0 if the number is not prime, and 1 if it is
 */

int is_prime_number(int n)
{
	return (prime(n, 2));
}
