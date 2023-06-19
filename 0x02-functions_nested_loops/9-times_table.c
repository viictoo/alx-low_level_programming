#include "main.h"

/**
 * times_table -prints the x9 times table from 0
 *
 */

void times_table(void)
{
	int x, y, product;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			product = x * y;

			if (y == 0)
			{
				_putchar('0');
			}

			else if (product < 10)
			{
				_putchar(' ');
				_putchar(product + '0');
			}

			else
			{
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			}

			if (y != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
