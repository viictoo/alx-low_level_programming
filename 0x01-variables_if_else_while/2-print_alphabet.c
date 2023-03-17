#include <stdio.h>

/**
 * Description:main-A program that prints lower alphabet
 *
 * putchar function
 *
 * Return: 0(exit success)
 */

int main(void)
{
	char c;

	for (c = 95; c < 123; c++)
	{
		putchar(c);
	}
		putchar('\n');

	return (0);

}
