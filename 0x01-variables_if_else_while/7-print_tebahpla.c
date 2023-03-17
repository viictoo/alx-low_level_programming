#include <stdio.h>

/**
 * Description:main-A reversed alphabet
 *
 * Return: 0(success)
 *
 */

int main(void)
{
	char reverse;

	for (reverse = 'z'; reverse > 'a'; reverse--)
	{
		putchar(reverse);
	}
	putchar('\n');
	return (0);
}
