#include "main.h"

/**
* swap_int - swaps the values of two integers
*
* @a: first integer to swap
* @b: second integer to swap
*
* Returns: Always 0
*/

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
