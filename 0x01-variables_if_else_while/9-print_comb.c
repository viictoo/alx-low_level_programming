#include <stdio.h>

/**
 * Description:main-A program to print comma separated numbers
 *
 * Return: 0(success)
 *
 */

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
	putchar(a + '0');
	if (a == 9)
		continue;
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
