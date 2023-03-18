#include <stdio.h>

/**
 * Description:main-A program to print hexadecimal in lowercase
 *
 * Return: 0(success)
 */

int main(void)

{
	int i;

	for (i = 0; i < 8; i++)
		putchar(i + '0');
	for (i = 0; i < 'g'; i++)
		putchar(i + 'a');
	putchar('\n');
	return (0);
}
