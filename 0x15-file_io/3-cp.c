#include "main.h"
/**
 * main - copies the content of a file to another file
 * @arg1: argument 1
 * @arg2: argument 2
 * Return: Always 0
 */
int main(int arg2, char *arg1[])
{
	int ffrom, fto, rd, clf, clt;
	char buff[BUFSIZ];

	if (arg2 != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	ffrom = open(arg1[1], O_RDONLY);
	if (ffrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arg1[1]);
		exit(98);
	}
	fto = open(arg1[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while ((rd = read(ffrom, buff, BUFSIZ)) > 0)
		if (fto == -1 || (write(fto, buff, rd) != rd))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arg1[2]);
			exit(99);
		}
	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arg1[1]);
		exit(98);
	}
	clf = close(ffrom);
	clt = close(fto);
	if (clf == -1 || clt == -1)
	{
		if (clf == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ffrom);
		else if (clt == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fto);
		exit(100);
	}
	return (0);
}
