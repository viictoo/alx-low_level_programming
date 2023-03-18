#include <stdio.h>

/**
 * Description:main-A program to print hexadecimal in lowercase
 *
 * Return: 0(success)
 */

int main(void)

{
	int i;

	for (i = '0'; i < 'g'; i++)
{
	if (i > 9 && i < 61)
		{
		continue;
		}

	putchar(i);
}
	putchar('\n');
	return (0);
}
