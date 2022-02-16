#include "main.h"

/**
 * times_table - Print 9 table
 */

void times_table(void)
{
	int col;
	int row;
	int r;

	for (col = 0; col <= 9; col++)
	{
		_putchar('0');

		for (row = 1; row <= 9; row++)
		{
			_putchar(',');
			_putchar(' ');

			r = col * row;

			if (r <= 9)
				_putchar(' ');
			else
				_putchar((r / 10) + '0');

			_putchar((r % 10) + '0');
		}
		_putchar('\n');
	}
}
