#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - executes a function given as a parameter
 *
 * @array: array
 * @size: size of the array
 * @action: pointer to the function
 *
 * Return: Always 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (array && action)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
