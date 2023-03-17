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

	for (c = 'a'; c < 'z'; c++)
	{

		if (c == 'q' || c == 'e')
		break;
	putchar(c);

	}
	putchar('\n');

	return (0);
}
