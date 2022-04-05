#include "main.h"
#include <string.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b:  is pointing to a string of 0 and 1 chars
 * Return: Always 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result, k, len;
	int i;

	if (b == NULL)
		return (0);
	k = 1;
	result = 0;
	len = strlen(b);

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
		{
			result = result + k;
		}
		k = k * 2;
	}
	return (result);
}
