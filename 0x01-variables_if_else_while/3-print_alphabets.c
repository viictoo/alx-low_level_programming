#include <stdio.h>

/**
 * Description:main-A program that prints lower and upper alphabet
 *
 * putchar function
 *
 * Return: 0(exit success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (c = 'A'; c < 'Z'; c++)
	{
		putchar(c);
	}

		putchar('\n');
		return (0);
}
