#include <stdio.h>

/**
 * main - prints its name
 *
 * @argc: number of imputs
 * @argv: array
 * Return: Always 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
