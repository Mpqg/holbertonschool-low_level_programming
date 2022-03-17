#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name
 *
 * @name: name of the person
 * @f: function
 *
 * Return: Always 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
