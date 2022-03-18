#include "3-calc.h"
#include <stdio.h>

/**
 * main - functions that op
 *
 * @argc: argument that count
 * @argv: argmument array
 *
 * Return: Always 0
 */
int main(int argc, char const *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (!get_op_func(argv[2]) || (argv[2][1] != NULL))
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
