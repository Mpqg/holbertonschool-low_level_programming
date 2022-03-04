#include <stdio.h>

/**
 * main - prints its name
 *
 * @argc: number of imputs
 * @argv: array
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
