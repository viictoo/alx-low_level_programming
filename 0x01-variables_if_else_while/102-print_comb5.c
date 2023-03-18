#include <stdio.h>

/**
 * Description:main-A program that prints combinations
 *
 * Return: 0(exit status success
 *
 */

int main(void)

{
	int x;
	int y;

	for (y = x + 1; y <= 9; y++)
	{
		putchar((x / 10) + '0');
		putchar((x % 10) + '0');
		putchar(' ');
		putchar((y / 10) + '0');
		putchar((y % 10)  + '0');
		if (x == 98 && y == 99)
			continue;
		putchar(',');
		putchar(' ');
	}
}
putchar('\n');
return (0);
