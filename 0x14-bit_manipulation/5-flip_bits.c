#include "main.h"

/**
 * flip_bits -  number of bits you would need to flip
 * @n:  number to be represented
 * @m:  the other number
 * Return: Always 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int xor = n ^ m;
	int count = 0;

	if (!n || !m)
		return (0);
	while (xor)
	{
		if (xor & 1)
			count++;
		xor = xor >> 1;
	}
	return (count);
}
