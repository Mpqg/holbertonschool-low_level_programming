#include "3-calc.h"

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

	if (!get_op_func(argv[2]))
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
