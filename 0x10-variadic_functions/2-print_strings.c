#include "variadic_functions.h"

/**
 * print_strings - prints strings.
 * @separator: string between the strings.
 * @n: number of strings
 *
 * Return: no return.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arglist;
	unsigned int i;
	char *str;

	va_start(arglist, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(arglist, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(arglist);
}
