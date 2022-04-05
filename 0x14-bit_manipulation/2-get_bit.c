#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n:  number to be represented
 * @index:  is the index, starting from 0 of the bit
 * Return: Always 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 1;
	unsigned int bit = sizeof(n) * 8 - 1;

	if (index > bit)
		return (-1);

	i = i << index;

	if (n & i)
		return (1);
	else
		return (0);
}
