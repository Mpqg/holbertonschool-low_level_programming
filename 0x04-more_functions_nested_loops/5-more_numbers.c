#include "main.h"
/**
* more_numbers - prints numbers from 0 to 14 x 10
*/
void more_numbers(void)
{
	int x;
	char c;

	for (x = 0; x < 10; x++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
			_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
	}
}
