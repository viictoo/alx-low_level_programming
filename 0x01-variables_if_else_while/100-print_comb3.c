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
	int b;


	for (a = 0; a < 10; a++)
	{
	for (b =  a + 1; b < 10; b++)
	{
		putchar(a + '0');
		putchar(b + '0');
		if (a == 8 && b == 9)
		continue;
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
