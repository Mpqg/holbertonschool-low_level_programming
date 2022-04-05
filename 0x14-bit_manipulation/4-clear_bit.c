#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n:  number to be represented
 * @index:  is the index, starting from 0 of the bit
 * Return: Always 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit = sizeof(n) * 8 - 1;
	unsigned int i = 1;

	if (index > bit)
		return (-1);

	*n = *n & ~(i << index);
	return (1);
}
