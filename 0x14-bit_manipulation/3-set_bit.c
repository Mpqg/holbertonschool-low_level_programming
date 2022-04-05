#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n:  number to be represented
 * @index:  is the index, starting from 0 of the bit
 * Return: Always 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 1;
	unsigned int bit = sizeof(n) * 8 - 1;

	if (index > bit)
		return (-1);

	i = i << index;

	*n = *n | i;

	return (1);
}
